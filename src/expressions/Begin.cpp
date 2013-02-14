/*
 * Begin.cpp
 *
 *  Created on: Jan 31, 2013
 *      Author: ncc
 */

#include "Begin.h"
#include "../SymbolTable.h"
#include <iostream>

namespace JazExpression {

void Begin::interpret(Context *context) {
	// TODO
	SymbolTable *newScope = new SymbolTable();
	context->newScope(*newScope);
	std::cout << "TODO: begin" << std::endl;
	
}

Begin::Begin(std::string args) : Expression(args) {
	// TODO Auto-generated constructor stub

}

Begin::~Begin() {
	// TODO Auto-generated destructor stub
}

} /* namespace JazExpression */
