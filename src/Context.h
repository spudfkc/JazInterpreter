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

class Context {
private:
	std::stack<int,std::vector<int> > thestack;
public:
	void push(int);
	int pop(void);
	int top(void);
	Context();
	virtual ~Context();
};

#endif /* CONTEXT_H_ */



