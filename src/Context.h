/*
 * Context.h
 *
 *  Created on: Jan 28, 2013
 *      Author: ncc
 */

#ifndef CONTEXT_H_
#define CONTEXT_H_
#include <stack>
#include <vector>
#include <string>
#include <map>

class Context {
private:
	std::map<std::string, int> variableMap;
	std::stack<std::string,std::vector<std::string> > thestack;
public:
	std::string getVariable(std::string);
	void assignVariable(std::string, int);
	int getIndexForLabel(std::string);
	int getValueForVariable(std::string);
	void push(std::string);
	std::string pop(void);
	std::string top(void);
	Context();
	virtual ~Context();
};

#endif /* CONTEXT_H_ */



