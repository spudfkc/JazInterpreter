/*
 * And.cpp
 *
 *  Created on: Jan 31, 2013
 *      Author: ncc
 */

#include "And.h"

namespace JazExpression {

int And::interpret(Context *context) {
	unsigned int arg1 = stringToInt(context->pop());
	unsigned int arg2 = stringToInt(context->pop());

	std::string result = intToString(arg1 & arg2);
	context->push(result);

	return -1;
}

And::And(std::string args) : Expression(args) {
	// TODO Auto-generated constructor stub

}

And::~And() {
	// TODO Auto-generated destructor stub
}

} /* namespace JazExpression */
