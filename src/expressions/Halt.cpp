/*
 * Halt.cpp
 *
 *  Created on: Jan 31, 2013
 *      Author: ncc
 */

#include "Halt.h"
#include <iostream>

namespace JazExpression {

int Halt::interpret(Context *context) {
	std::cout << "TODO: halt" << std::endl;
//	std::cout << "-> Halting!" << std::endl;
//	exit(0);
	return -1;
}

Halt::Halt(std::string args) : Expression(args) {
	// TODO Auto-generated constructor stub

}

Halt::~Halt() {
	// TODO Auto-generated destructor stub
}

} /* namespace JazExpression */
