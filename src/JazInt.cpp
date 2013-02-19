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
#include "SymbolTable.h"

using namespace std;

int main() {

	// TODO input arguments
	string fp = "/home/ncc/Downloads/demo.jaz";

	vector<Expression*> expressionList;    // Holds expressions
	Context *context = new Context();      // Holds stack and labels (possibly symbol table?)
	Parser *p = new Parser();              // Parses files

	JazExpression::SymbolTable *rootScope = new JazExpression::SymbolTable();
	context->newScope(rootScope);

	expressionList = p->parse(fp);

	// Not sure how to get a map of the labels without iterating through all the
	// expressions before hand, so we keep track of them in the parser
	context->setLabelMap(p->getLabelMap());

	// Now interpret all the expressions
	cout << "======= Starting interpret" << endl;
	int i;
	// this -1 idea doesn't work as i intended
	while ((i = context->nextInstruction()) != -1 && i < expressionList.size()) {
//		cout << "Expression #: " << i << endl;
		Expression *expression = expressionList.at(i);
		context->instructions.push(++i);
		expression->interpret(context);
	}
	cout << "======= End interpret" << endl;

	// TODO memory clean-up

	return 0;
}
