/*
 * SymbolTable.cpp
 *
 *  Created on: Feb 12, 2013
 *      Author: ncc
 */

#include "SymbolTable.h"
#include <iostream>

namespace JazExpression {

int SymbolTable::resolve(std::string var) {
	int result;
	std::map<std::string, int>::const_iterator iter = variableMap.find(var);
	if (iter == variableMap.end()) {
//		std::cout << "Variable " << var << " Not found in this scope" << std::endl;
		result = parent->resolve(var);
	}
	else {
//		std::cout << "Variable " << var << " found with value " << iter->second << std::endl;
		result = iter->second;
	}
	return result;
}

void SymbolTable::setVariable(std::string var, int value) {
	SymbolTable *found = NULL;
	if (parent != NULL) {
		found = parent->hasVariable(var);
	}
	if (found != NULL) {
		found->setVariable(var, value);
	}
	else {
		variableMap[var] = value;
	}
}

SymbolTable * SymbolTable::hasVariable(std::string var) {
	std::map<std::string, int>::const_iterator iter = variableMap.find(var);
	if (iter == variableMap.end()) {
		if (parent != NULL) {
			return parent->hasVariable(var);
		}
		else {
			return NULL;
		}
	}
	else {
		return this;
	}
}

void SymbolTable::setParent(SymbolTable *newParent) {
	parent = newParent;
}

SymbolTable * SymbolTable::getParent(void) {
	return parent;
}

SymbolTable::SymbolTable() {
	parent = NULL;
	// TODO Auto-generated constructor stub

}

SymbolTable::~SymbolTable() {
	// TODO Auto-generated destructor stub
}

} /* namespace JazExpression */
