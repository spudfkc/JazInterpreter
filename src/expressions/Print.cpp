/*
 * Print.cpp
 *
 *  Created on: Jan 31, 2013
 *      Author: ncc
 */

#include "Print.h"
#include <iostream>

namespace JazExpression {

void Print::interpret(Context *context) {
	std::cout << context->pop() << std::endl;
}

Print::Print(std::string args) : Expression(args) {
	// TODO Auto-generated constructor stub

}

Print::~Print() {
	// TODO Auto-generated destructor stub
}

} /* namespace JazExpression */
