/*
 * Show.cpp
 *
 *  Created on: Jan 31, 2013
 *      Author: ncc
 */

#include "Show.h"

namespace JazExpression {

int Show::interpret(Context *context) {
	std::cout << this->arguments << std::endl;
	return -1;
}

Show::Show(std::string args) : Expression(args) {
	// TODO Auto-generated constructor stub

}

Show::~Show() {
	// TODO Auto-generated destructor stub
}

} /* namespace JazExpression */
