/*
 * Call.cpp
 *
 *  Created on: Jan 31, 2013
 *      Author: ncc
 */

#include "Call.h"
#include <iostream>

namespace JazExpression {

int Call::interpret(Context *context) {
	// TODO
	std::cout << "TODO: call" << std::endl;
	return -1;
}

Call::Call(std::string args) : Expression(args) {
	// TODO Auto-generated constructor stub

}

Call::~Call() {
	// TODO Auto-generated destructor stub
}

} /* namespace JazExpression */
