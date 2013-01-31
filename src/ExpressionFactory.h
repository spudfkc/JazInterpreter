/*
 * ExpressionFactory.h
 *
 *  Created on: Jan 29, 2013
 *      Author: ncc
 */

#ifndef EXPRESSIONFACTORY_H_
#define EXPRESSIONFACTORY_H_
#include "Expression.h"

namespace JazExpression {

class ExpressionFactory {
public:
	Expression createPush(std::string);
	ExpressionFactory();
	virtual ~ExpressionFactory();
};

} /* namespace JazExpression */
#endif /* EXPRESSIONFACTORY_H_ */
