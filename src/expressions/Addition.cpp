/*
 * Addition.cpp
 *
 *  Created on: Jan 31, 2013
 *      Author: ncc
 */

#include "Addition.h"

namespace JazExpression {

void Addition::interpret(Context *context) 
{
// get the top two values from context...

	int value1 = context->pop();
	int value2 = context->pop();

// add them together and return the push 

	int value = value2 + value1;
	context->push(value);
}

Addition::Addition(std::string args) : Expression(args) {

	// TODO Auto-generated constructor stub

}

Addition::~Addition() {
	// TODO Auto-generated destructor stub
}

} /* namespace JazExpression */
