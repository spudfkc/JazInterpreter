/*
 * Return.cpp
 *
 *  Created on: Jan 31, 2013
 *      Author: ncc
 */

#include "Return.h"
#include <iostream>

namespace JazExpression {

int Return::interpret(Context *context) {
	// TODO
	std::cout << "TODO: return" << std::endl;
	return -1;
}

Return::Return(std::string args) : Expression(args) {
	// TODO Auto-generated constructor stub

}

Return::~Return() {
	// TODO Auto-generated destructor stub
}

} /* namespace JazExpression */
