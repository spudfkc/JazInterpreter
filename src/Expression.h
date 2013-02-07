/*
 * Expression.h
 *
 *  Created on: Jan 28, 2013
 *      Author: ncc
 */

#ifndef EXPRESSION_H_
#define EXPRESSION_H_
#include "Context.h"
#include <string>

class Expression {
private:
public:
	std::string arguments;
	virtual void interpret(Context*);
	void setArguments(Expression);
	Expression(std::string);
	virtual ~Expression();
};

#endif /* EXPRESSION_H_ */
