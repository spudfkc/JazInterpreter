/*
 * Show.cpp
 *
 *  Created on: Jan 31, 2013
 *      Author: ncc
 */

#include "Show.h"
#include <iostream>

namespace JazExpression {

void Show::interpret(Context *context) {
	std::cout << "SHOWING" << std::endl;
	std::cout << this->arguments << std::endl;
}

Show::Show(std::string args) : Expression(args) {
	// TODO Auto-generated constructor stub

}

Show::~Show() {
	// TODO Auto-generated destructor stub
}

} /* namespace JazExpression */
