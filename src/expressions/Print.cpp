/*
 * Print.cpp
 *
 *  Created on: Jan 31, 2013
 *      Author: ncc
 */

#include "Print.h"
#include <iostream>

namespace JazExpression {

bool Print::isNumber(std::string& s) {
	std::string::const_iterator it = s.begin();
	while (it != s.end() && std::isdigit(*it)) ++it;
	return !s.empty() && it == s.end();
}

int Print::interpret(Context *context) {
	std::string content = context->pop();

	int value;
	if (!isNumber(content)) {
		// evaluate
		value = context->getVariable(content);
	}
	else {
		value = stringToInt(content);
	}

	std::cout << value << std::endl;
	return -1;
}

Print::Print(std::string args) : Expression(args) {
	// TODO Auto-generated constructor stub

}

Print::~Print() {
	// TODO Auto-generated destructor stub
}

} /* namespace JazExpression */
