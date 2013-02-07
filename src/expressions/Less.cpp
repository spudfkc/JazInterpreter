/*
 * Less.cpp
 *
 *  Created on: Jan 31, 2013
 *      Author: ncc
 */

#include "Less.h"

namespace JazExpression {

void Less::interpret(Context *context) {
// get the top two values from context...

	int value1 = stringToInt(context->pop());
	int value2 = stringToInt(context->pop());

// checks to see if value2 is less than value1 

	if (value2 < value1) {
		context->push("0");
	}
	else {
		context->push("1");
	}

}

Less::Less(std::string args) : Expression(args) {
	// TODO Auto-generated constructor stub

}

Less::~Less() {
	// TODO Auto-generated destructor stub
}

} /* namespace JazExpression */
