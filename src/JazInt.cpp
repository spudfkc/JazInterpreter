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
#include <cstdlib>

using namespace std;

int main(int argc, char * argv[]) {

	string fp;
	if (argc == 2) {
		fp = argv[1];
	}
	else {
		cout << "No input file specified." << endl;
		exit(1);
	}

	// TODO
	// * memory cleanup


	vector<Expression*> expressionList;    // Holds expressions
	Context *context = new Context();      // Holds stack and labels (possibly symbol table?)
	Parser *p = new Parser();              // Parses files

	JazExpression::SymbolTable *rootScope = new JazExpression::SymbolTable();
	rootScope->afterCall = -1;
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

	return 0;
}
