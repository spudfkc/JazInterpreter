/*
 * Begin.cpp
 *
 *  Created on: Jan 31, 2013
 *      Author: ncc
 */

#include "Begin.h"
#include <iostream>

namespace JazExpression {

int Begin::interpret(Context *context) {
	// TODO
	std::cout << "TODO: begin" << std::endl;
	return -1;
}

Begin::Begin(std::string args) : Expression(args) {
	// TODO Auto-generated constructor stub

}

Begin::~Begin() {
	// TODO Auto-generated destructor stub
}

} /* namespace JazExpression */
