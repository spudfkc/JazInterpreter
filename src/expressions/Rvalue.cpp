/*
 * Rvalue.cpp
 *
 *  Created on: Jan 29, 2013
 *      Author: ncc
 */

#include "Rvalue.h"

namespace JazExpression {

void Rvalue::interpret(Context *context) {
	// TODO
	// get variable from args - symboltable(scope)
	// get contents of variable
	// push contents onto stack
}

Rvalue::Rvalue(std::string args) : Expression(args) {
}

Rvalue::~Rvalue() {
	// TODO Auto-generated destructor stub
}

} /* namespace JazExpression */
