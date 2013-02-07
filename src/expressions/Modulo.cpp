/*
 * Modulo.cpp
 *
 *  Created on: Jan 31, 2013
 *      Author: ncc
 */

#include "Modulo.h"

namespace JazExpression {

void Modulo::interpret(Context *context) {

// get the top two values from context...

	int value1 = stringToInt(context->pop());
	int value2 = stringToInt(context->pop());

// get the remainder from dividing the value2 by value1 and return the push 

	int value = value2 % value1;
	context->push(intToString(value));
}

Modulo::Modulo(std::string args) : Expression(args) {
	// TODO Auto-generated constructor stub

}

Modulo::~Modulo() {
	// TODO Auto-generated destructor stub
}

} /* namespace JazExpression */
