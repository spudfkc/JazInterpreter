/*
 * Push.cpp
 *
 *  Created on: Jan 28, 2013
 *      Author: ncc
 */

#include "Push.h"
#include "../Context.h"

namespace JazExpression {

void Push::interpret(Context *context, int arg) {
	context->push(arg);
}

Push::Push() {
	// TODO Auto-generated constructor stub

}

Push::~Push() {
	// TODO Auto-generated destructor stub
}

} /* namespace JazExpression */
