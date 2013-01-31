/*
 * ExpressionFactory.cpp
 *
 *  Created on: Jan 29, 2013
 *      Author: ncc
 */

#include "ExpressionFactory.h"
#include "expressions/Push.h"

namespace JazExpression {

Expression ExpressionFactory::createPush(std::string args) {
	Push push(args);
	return push;
}

ExpressionFactory::ExpressionFactory() {
	// TODO Auto-generated constructor stub

}

ExpressionFactory::~ExpressionFactory() {
	// TODO Auto-generated destructor stub
}

} /* namespace JazExpression */
