/*
 * Subtraction.cpp
 *
 *  Created on: Jan 31, 2013
 *      Author: ncc
 */

#include "Subtraction.h"

namespace JazExpression {

void Subtraction::interpret(Context *context) 
{
// get the top two values from context...

	int value1 = context.pop();
	int value2 = context.pop();

// subtract value2 by value1 and return the push 

	int value = value2 - value1;
	context.push(value);
}

Subtraction::Subtraction(std::string args) : Expression(args) {
	// TODO Auto-generated constructor stub

}

Subtraction::~Subtraction() {
	// TODO Auto-generated destructor stub
}

} /* namespace JazExpression */
