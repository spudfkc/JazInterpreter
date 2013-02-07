/*
 * Expression.cpp
 *
 *  Created on: Jan 28, 2013
 *      Author: ncc
 */

#include "Expression.h"
#include <iostream>

void Expression::interpret(Context *context) {
	std::cout << "IN PARENT CLASS" << std::endl;
}

Expression::Expression(std::string args) {
	arguments = args;
}

Expression::~Expression() {
}

