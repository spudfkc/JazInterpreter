/*
 * Expression.cpp
 *
 *  Created on: Jan 28, 2013
 *      Author: ncc
 */

#include "Expression.h"

void Expression::interpret(Context *context) {

}

Expression Expression::test(std::string args) {
	Expression e("");
	return e;
}

Expression::Expression(std::string args) {
	arguments = args;
}

Expression::~Expression() {
}

