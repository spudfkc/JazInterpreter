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
#include "Expression.h"

class Context {
private:
	std::stack<int,std::vector<int> > thestack;
public:
	int getIndexForLabel(std::string);
	int getValueForVariable(std::string);
	void push(int);
	int pop(void);
	int top(void);
	Context(std::vector<Expression*>);
	virtual ~Context();
};

#endif /* CONTEXT_H_ */



