/*
 * Goto.cpp
 *
 *  Created on: Jan 31, 2013
 *      Author: ncc
 */

#include "Goto.h"
#include <iostream>

namespace JazExpression {

int Goto::interpret(Context *context) {
	int result = context->getIndexForLabel(arguments);
	return result;
}

Goto::Goto(std::string args) : Expression(args) {
	// TODO Auto-generated constructor stub

}

Goto::~Goto() {
	// TODO Auto-generated destructor stub
}

} /* namespace JazExpression */
