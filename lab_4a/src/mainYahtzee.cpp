
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
	test1->root = new NodeT("A");
	test1->root->left = new NodeT("B");
	test1->root->right = new NodeT("C");
	test1->root->right->left = new NodeT("D");
	test1->root->left->parent = test1->root;
	test1->root->right->parent = test1->root;
	test1->root->right->left->parent = test1->root->right;

	test1->adjustHeights(test1->root->right->left);
	test1->adjustHeights(test1->root->left);

	//This should print |B, 1||A, 3||D, 1||C, 2|
	cout << "test1 contents in order are:" << endl;
	test1->printTreeIO();
	cout << endl;

	//Adding another node to C's right
	test1->root->right->right = new NodeT("E");
	test1->root->right->right->parent = test1->root->right;
	test1->adjustHeights(test1->root->right->right);

	//This should print |B, 1||A, 3||D, 1||C, 2||E, 1|
	cout << "test1 contents in order are now (height unchanged):" << endl;
	test1->printTreeIO();
	cout << endl;

	//Adding another node to E's right
	test1->root->right->right->right = new NodeT("F");
	test1->root->right->right->right->parent = test1->root->right->right;
	test1->adjustHeights(test1->root->right->right->right);

	//This should print |B, 1||A, 4||D, 1||C, 3||E, 2||F, 1|
	cout << "test1 contents in order are now (height changed):" << endl;
	test1->printTreeIO();
	cout << endl;
	printLine();



	//	string sarr[10] = {"run","tuxedo","ocelot","vast","bark","punctilios","hello","is","sibylic","go"};
//	treePuzzle(10,sarr,0);
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

