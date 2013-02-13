/*
 * Lvalue.cpp
 *
 *  Created on: Jan 29, 2013
 *      Author: ncc
 */

#include "Lvalue.h"

namespace JazExpression {

int Lvalue::interpret(Context *context) {
	context->push(arguments);
	return -1;
}

Lvalue::Lvalue(std::string args) : Expression(args) {

}

Lvalue::~Lvalue() {
	// TODO Auto-generated destructor stub
}

} /* namespace JazExpression */
