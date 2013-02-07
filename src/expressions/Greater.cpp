/*
 * Greater.cpp
 *
 *  Created on: Jan 31, 2013
 *      Author: ncc
 */

#include "Greater.h"

namespace JazExpression {

void Greater::interpret(Context *context) 
{
// get the top two values from context...

	int value1 = context.pop();
	int value2 = context.pop();

// checks to see if value2 greater than value1 

	if (value2 > value1)	
		context.push(0);	// if true push 0
	context.push(1);		// else push 1

}

Greater::Greater(std::string args) : Expression(args) {
	// TODO Auto-generated constructor stub

}

Greater::~Greater() {
	// TODO Auto-generated destructor stub
}

} /* namespace JazExpression */
