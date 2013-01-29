/*
 * Expression.h
 *
 *  Created on: Jan 28, 2013
 *      Author: ncc
 */

#ifndef EXPRESSION_H_
#define EXPRESSION_H_
#include "Context.h"

class Expression {
public:
	void interpret(Context*);
	Expression();
	virtual ~Expression();
};

#endif /* EXPRESSION_H_ */
