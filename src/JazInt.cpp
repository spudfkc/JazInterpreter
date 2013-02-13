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
#include "Context.h"/

using namespace std;

int main() {

	string fp = "/home/ncc/Downloads/demo.jaz";

	vector<Expression*> expressionList;    // Holds expressions
	Context *context = new Context();      // Holds stack and labels (possibly symbol table?)
	Parser *p = new Parser();              // Parses files
	expressionList = p->parse(fp);
	context->setLabelMap(p->getLabelMap());

	// Now interpret all the expressions
	cout << "======= Starting interpret" << endl;
	int i;
	for (i = 0; i < expressionList.size();) {
		cout << "Expression #: " << i << endl;
		Expression *expression = expressionList.at(i);
		int jump = expression->interpret(context);
		if (jump > 0) {
			i = jump;
		}
		else {
			i++;
		}
	}
	cout << "======= End interpret" << endl;

	return 0;
}
