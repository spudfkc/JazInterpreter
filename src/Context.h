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

class Context {
private:
	std::stack<std::string,std::vector<std::string> > thestack;
public:
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



