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
	Expression test(std::string);
	std::string arguments;
	void interpret(Context*);
	void setArguments(Expression);
	Expression(std::string);
	virtual ~Expression();
};

#endif /* EXPRESSION_H_ */
