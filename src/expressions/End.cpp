/*
 * End.cpp
 *
 *  Created on: Jan 31, 2013
 *      Author: ncc
 */

#include "End.h"
#include <iostream>

namespace JazExpression {

int End::interpret(Context *context) {
	// TODO
	std::cout << "TODO: end" << std::endl;
	return 0;
}

End::End(std::string args) : Expression(args) {
	// TODO Auto-generated constructor stub

}

End::~End() {
	// TODO Auto-generated destructor stub
}

} /* namespace JazExpression */
