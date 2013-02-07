/*
 * GreaterEqual.cpp
 *
 *  Created on: Jan 31, 2013
 *      Author: ncc
 */

#include "GreaterEqual.h"

namespace JazExpression {

void GreaterEqual::interpret(Context *context) 
{
// get the top two values from context...

	int value1 = context.pop();
	int value2 = context.pop();

// checks to see if value2 greater than or equal to value1 

	if (value2 >= value1)	
		context.push(0);	// if true push 0
	context.push(1);		// else push 1

}

GreaterEqual::GreaterEqual(std::string args) : Expression(args) {
	// TODO Auto-generated constructor stub

}

GreaterEqual::~GreaterEqual() {
	// TODO Auto-generated destructor stub
}

} /* namespace JazExpression */
