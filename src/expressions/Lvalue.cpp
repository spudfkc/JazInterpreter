/*
 * Lvalue.cpp
 *
 *  Created on: Jan 29, 2013
 *      Author: ncc
 */

#include "Lvalue.h"

namespace JazExpression {

void Lvalue::interpret(Context *context) {
	// TODO
	// get variable from args - symboltable(scope)
	// get address of variable
	// push address onto stack
}

Lvalue::Lvalue(std::string args) : Expression(args) {

}

Lvalue::~Lvalue() {
	// TODO Auto-generated destructor stub
}

} /* namespace JazExpression */
