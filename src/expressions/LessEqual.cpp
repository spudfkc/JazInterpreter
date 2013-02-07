/*
 * LessEqual.cpp
 *
 *  Created on: Jan 31, 2013
 *      Author: ncc
 */

#include "LessEqual.h"

namespace JazExpression {

void LessEqual::interpret(Context *context) {
	// get the top two values from context...

	int value1 = stringToInt(context->pop());
	int value2 = stringToInt(context->pop());

// checks to see if value2 is less than or equal to value1 

	if (value2 <= value1) {
		context->push("0");
	}
	else {
		context->push("1");
	}

}

LessEqual::LessEqual(std::string args) : Expression(args) {
	// TODO Auto-generated constructor stub

}

LessEqual::~LessEqual() {
	// TODO Auto-generated destructor stub
}

} /* namespace JazExpression */
