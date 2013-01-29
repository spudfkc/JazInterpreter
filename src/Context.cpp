/*
 * Context.cpp
 *
 *  Created on: Jan 28, 2013
 *      Author: ncc
 */

#include "Context.h"

void Context::push(int arg) {
	thestack.push(arg);
}

Context::Context() {
	// TODO Auto-generated constructor stub

}

Context::~Context() {
	// TODO Auto-generated destructor stub
}

