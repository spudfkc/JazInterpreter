/*
 * Expression.cpp
 *
 *  Created on: Jan 28, 2013
 *      Author: ncc
 */

#include "Expression.h"
#include <iostream>
#include <sstream>
#include <cstdlib>

int Expression::interpret(Context *context) {
	std::cout << "IN PARENT CLASS" << std::endl;
	return -1;
}

std::string Expression::intToString(int i) {
	std::stringstream ss;
	ss << i;
	return ss.str();
}

int Expression::stringToInt(std::string str) {
	return atoi(str.c_str());
}

Expression::Expression(std::string args) {
	arguments = args;
}

Expression::~Expression() {
}

