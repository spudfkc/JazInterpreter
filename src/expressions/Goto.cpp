/*
 * Goto.cpp
 *
 *  Created on: Jan 31, 2013
 *      Author: ncc
 */

#include "Goto.h"
#include <iostream>

namespace JazExpression {

void interpret(Context *context) {
	std::cout << "GOTO TESTING TESTING" << std::endl;
}

Goto::Goto(std::string args) : Expression(args) {
	// TODO Auto-generated constructor stub

}

Goto::~Goto() {
	// TODO Auto-generated destructor stub
}

} /* namespace JazExpression */