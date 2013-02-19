/*
 * SymbolTable.h
 *
 *  Created on: Feb 12, 2013
 *      Author: ncc
 */

#ifndef SYMBOLTABLE_H_
#define SYMBOLTABLE_H_
#include <string>
#include <map>

namespace JazExpression {

class SymbolTable {
private:
	std::map<std::string, int> variableMap;
	SymbolTable *parent;
public:
	int afterCall;
	bool hasVariable(std::string);
	SymbolTable * getParent(void);
	void setParent(SymbolTable*);
	void setVariable(std::string, int);
	void setVariableDirectly(std::string, int);
	int resolveDirectly(std::string);
	int resolve(std::string);
	SymbolTable();
	virtual ~SymbolTable();
};

} /* namespace JazExpression */
#endif /* SYMBOLTABLE_H_ */
