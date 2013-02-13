/*
 * Addition.cpp
 *
 *  Created on: Jan 31, 2013
 *      Author: ncc
 */

#include "Addition.h"

namespace JazExpression {

int Addition::interpret(Context *context)
{

	// get the top two values from context...
	std::string value1 = context->pop();
	std::string value2 = context->pop();

	// add them together and return the push
	int result = Expression::stringToInt(value2) + Expression::stringToInt(value1);

	context->push(Expression::intToString(result));

	return -1;
}

Addition::Addition(std::string args) : Expression(args) {

	// TODO Auto-generated constructor stub

}

Addition::~Addition() {
	// TODO Auto-generated destructor stub
}

} /* namespace JazExpression */
