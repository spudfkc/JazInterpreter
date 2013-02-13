/*
 * Label.cpp
 *
 *  Created on: Jan 31, 2013
 *      Author: ncc
 */

#include "Label.h"

namespace JazExpression {

int Label::interpret(Context *context) {
	// no-op
	return -1;
}

Label::Label(std::string args) : Expression(args) {
	// TODO Auto-generated constructor stub

}

Label::~Label() {
	// TODO Auto-generated destructor stub
}

} /* namespace JazExpression */
