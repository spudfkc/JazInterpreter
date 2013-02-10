/*
 * Rvalue.cpp
 *
 *  Created on: Jan 29, 2013
 *      Author: ncc
 */

#include "Rvalue.h"

namespace JazExpression {

void Rvalue::interpret(Context *context) {
	std::string value = context->getVariable(arguments);
	context->push(value);
}

Rvalue::Rvalue(std::string args) : Expression(args) {
}

Rvalue::~Rvalue() {
	// TODO Auto-generated destructor stub
}

} /* namespace JazExpression */
