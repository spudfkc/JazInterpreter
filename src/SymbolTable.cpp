/*
 * SymbolTable.cpp
 *
 *  Created on: Feb 12, 2013
 *      Author: ncc
 */

#include "SymbolTable.h"

namespace JazExpression {

int SymbolTable::resolve(std::string var) {
	int result;
	std::map<std::string, int>::const_iterator iter = variableMap.find(var);
	if (iter == variableMap.end()) {
		result = parent->resolve(var);
	}
	else {
		result = iter->second;
	}
	return result;
}

void SymbolTable::setVariable(std::string var, int value) {
	variableMap[var] = value;
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
