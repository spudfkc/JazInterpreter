/*
 * Context.cpp
 *
 *  Created on: Jan 28, 2013
 *      Author: ncc
 */

#include "Context.h"

void Context::assignVariable(std::string var, int value) {
	// TODO
}

void Context::push(std::string arg) {
	thestack.push(arg);
}

std::string Context::pop(void) {
	std::string result = thestack.top();
	thestack.pop();
	return result;
}

Context::Context() {
	// TODO Auto-generated constructor stub

}

Context::~Context() {
	// TODO Auto-generated destructor stub
}

