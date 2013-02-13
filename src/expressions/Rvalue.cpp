/*
 * Rvalue.cpp
 *
 *  Created on: Jan 29, 2013
 *      Author: ncc
 */

#include "Rvalue.h"

namespace JazExpression {

int Rvalue::interpret(Context *context) {
	std::string value = intToString(context->getVariable(arguments));
	context->push(value);
	return -1;
}

Rvalue::Rvalue(std::string args) : Expression(args) {
}

Rvalue::~Rvalue() {
	// TODO Auto-generated destructor stub
}

} /* namespace JazExpression */
