//============================================================================
// Name        : JazInt.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


/**********************************************************
 ****************** TODO List *****************************
 **********************************************************
 *
 * Add JazInterpreter namespace to all classes
 *
 * update #includes to use namespaces over relative paths
 *
 *
 **********************************************************
 */

#include <vector>
#include <iostream>
#include "Expression.h"
#include "Parser.h"
#include "Context.h"

using namespace std;

int main() {

	string fp = "C:\\Users\\Andrew\\Desktop\\spring 2013\\software engineering\\assignment 1\\demo.jaz";

	vector<Expression*> expressionList;             // Holds expressions
	Context *context = new Context(); // Holds stack and labels (possibly symbol table?)
	Parser *p = new Parser();                       // Parses files

	expressionList = p->parse(fp);

	// Now interpret all the expressions
	cout << "======= Starting interpret" << endl;
	int i;
	for (i = 0; i < expressionList.size(); i++) {
		cout << "Expression #: " << i << endl;
		Expression *expression = expressionList.at(i);
		expression->interpret(context);
	}
	cout << "======= End interpret" << endl;

	return 0;
}
