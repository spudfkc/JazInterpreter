/*
 * Context.cpp
 *
 *  Created on: Jan 28, 2013
 *      Author: ncc
 */

#include "Context.h"
#include <iostream>

int Context::nextInstruction() {
	int result = instructions.top();
	instructions.pop();
	return result;
}

int Context::getVariable(std::string var) {
	return variableMap[var];
}

void Context::assignVariable(std::string var, int value) {
	//std::cout << "Assigning " << var << " = " << value << std::endl;
	variableMap[var] = value;
}

int Context::getIndexForLabel(std::string label) {
	return labelMap[label];
}

void Context::setLabelMap(std::map<std::string, int> map) {
	labelMap = map;
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
	instructions.push(-1);
	instructions.push(0);
	// TODO Auto-generated constructor stub

}

Context::~Context() {
	// TODO Auto-generated destructor stub
}

