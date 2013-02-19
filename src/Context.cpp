/*
 * Context.cpp
 *
 *  Created on: Jan 28, 2013
 *      Author: ncc
 */

#include "Context.h"
#include <iostream>


void Context::popScope(void) {
	// TODO cleanup
	currentScope = currentScope->getParent();
}

void Context::newScope(JazExpression::SymbolTable *scope) {
	if (currentScope != NULL) {
		scope->setParent(currentScope);
	}
	currentScope = scope;
}

int Context::nextInstruction() {
	int result = instructions.top();
	instructions.pop();
	return result;
}

int Context::getVariable(std::string var) {
	return currentScope->resolve(var);
//	return variableMap[var];
}

void Context::assignVariable(std::string var, int value) {
	currentScope->setVariable(var, value);
//	variableMap[var] = value;
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
	currentScope = new JazExpression::SymbolTable();
	instructions.push(-1); // This should indicate the end of intructions
	instructions.push(0);  // start at spot 0
}

Context::~Context() {
	// TODO Auto-generated destructor stub
}

