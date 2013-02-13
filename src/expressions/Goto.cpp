/*
 * Goto.cpp
 *
 *  Created on: Jan 31, 2013
 *      Author: ncc
 */

#include "Goto.h"
#include <iostream>

namespace JazExpression {

void Goto::interpret(Context *context) {
	context->instructions.push(context->getIndexForLabel(arguments));
}

Goto::Goto(std::string args) : Expression(args) {
	// TODO Auto-generated constructor stub

}

Goto::~Goto() {
	// TODO Auto-generated destructor stub
}

} /* namespace JazExpression */
