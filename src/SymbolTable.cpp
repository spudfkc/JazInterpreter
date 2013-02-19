/*
 * SymbolTable.cpp
 *
 *  Created on: Feb 12, 2013
 *      Author: ncc
 */

#include "SymbolTable.h"
#include <iostream>

namespace JazExpression {

int SymbolTable::resolveDirectly(std::string var) {
	int result;
	std::map<std::string, int>::const_iterator iter = variableMap.find(var);
	if (iter == variableMap.end()) {
		result = 0;
	}
	else {
		result = variableMap[var];
	}
	return result;
}

int SymbolTable::resolve(std::string var) {

	if (afterCall == -1) {
		return variableMap[var];
	}
	else if (afterCall) {
		return variableMap[var];
	}
	else {
		return parent->resolve(var);
	}
//
//	int result;
//	std::map<std::string, int>::const_iterator iter = variableMap.find(var);
//	if (iter == variableMap.end()) {
//		if (parent == NULL) {
//			result = 0;
//		}
//		else {
//			result = parent->resolve(var);
//		}
//	}
//	else {
//		result = iter->second;
//	}
//	return result;
}

void SymbolTable::setVariable(std::string var, int value) {

	if (afterCall == -1) {
		variableMap[var] = value;
	}
	else if (afterCall) {
		parent->setVariable(var, value);
	}
	else {
		variableMap[var] = value;
	}
//	if (hasVariable(var)) {
//		variableMap[var] = value;
//	}
//	else {
//		if (parent != NULL) {
//			if (parent->hasVariable(var)) {
//				parent->setVariable(var, value);
//			}
//			else {
//				variableMap[var] = value;
//			}
//		}
//		else {
//			variableMap[var] = value;
//		}
//	}
}

void SymbolTable::setVariableDirectly(std::string var, int value) {
	variableMap[var] = value;
}

bool SymbolTable::hasVariable(std::string var) {
	// TODO - clean this up/optimize
	bool result = false;
	std::map<std::string, int>::const_iterator iter = variableMap.find(var);
	if (iter == variableMap.end()) {
		result = false;
	}
	else {
		result = true;;
	}
	return result;
}

void SymbolTable::setParent(SymbolTable *newParent) {
	parent = newParent;
}

SymbolTable * SymbolTable::getParent(void) {
	return parent;
}

SymbolTable::SymbolTable() {
	parent = NULL;
	afterCall = 0;
	// TODO Auto-generated constructor stub

}

SymbolTable::~SymbolTable() {
	// TODO Auto-generated destructor stub
}

} /* namespace JazExpression */
