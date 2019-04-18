
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <fstream>
#include "BSTY.hpp"
#include "TreePuzzle.hpp"
using namespace std;

void printLine();

int main() {
	// adjustHeights_Testcases
	printLine();
	cout << "Test Cases for adjustHeights method" << endl;
	printLine();
	BSTY *test1 = new BSTY();
	test1->insertit("B");
	test1->insertit("A");
	test1->insertit("D");
	test1->insertit("C");

	//This should print |A, 1||B, 3||C, 1||D, 2|
	cout << "test1 contents in order are:" << endl;
	test1->printTreeIO();
	cout << endl;

	//Adding another node to D's right
	test1->insertit("F");

	//This should print |A, 1||B, 3||D, 1||C, 2||F, 1|
	cout << "Added an 'F', test1 contents in order are now (height unchanged):" << endl;
	test1->printTreeIO();
	cout << endl;

	//Adding another node to F's left
	test1->insertit("E");

	//This should print |A, 1||B, 4||C, 1||D, 3||E, 1||F, 2|
	cout << "Added an 'E', test1 contents in order are now (height changed):" << endl;
	test1->printTreeIO();
	cout << endl;
	printLine();

	//test1->root->right->right->left = new NodeT("G");
	//This should print |B, 1||A, 4||D, 1||C, 3||G, 1||E, 2||F, 1|
	cout << "test1 contents in order are now (height changed):" << endl;
	test1->printTreeIO();
	cout << endl;
	printLine();

	//Testcases for remove1
	cout << "Test Cases for remove1 method" << endl;
	printLine();

	cout << "test1 contents in order are:" << endl;
	test1->printTreeIO();
	cout << endl;
	test1->remove("E");
	cout << "test1 contents in order are now (height changed):" << endl;
	test1->printTreeIO();
	cout << endl;
	printLine();
	printLine();




	string sarr[10] = {"run","tuxedo","ocelot","vast","bark","punctilios","hello","is","sibylic","go"};
	treePuzzle(10,sarr,0);
	//FOR EXTRA CREDIT
	//string sarr2[13] = {"xray","jack","superthriller","fa","noon","muddle","kindergartener","zoogeographical","window","dandelion","youthsploitation","byte","apple"};
	//treePuzzle(13,sarr2 ,1);

}
/*
 * This function prints out a line of stars to the console
 * Parameters:
 * 		None
 * Returns:
 * 		Nothing
 */
void printLine() {
	cout << "*********************************************************************************************************" << endl;
	return;
}

