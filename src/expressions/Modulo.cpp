/*
 * Modulo.cpp
 *
 *  Created on: Jan 31, 2013
 *      Author: ncc
 */

#include "Modulo.h"

namespace JazExpression {

int Modulo::interpret(Context *context) {
	int value1 = stringToInt(context->pop());
	int value2 = stringToInt(context->pop());

	int value = value2 % value1;
	context->push(intToString(value));
	return -1;
}

Modulo::Modulo(std::string args) : Expression(args) {
	// TODO Auto-generated constructor stub

}

Modulo::~Modulo() {
	// TODO Auto-generated destructor stub
}

} /* namespace JazExpression */
