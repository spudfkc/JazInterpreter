/*
 * Parser.cpp
 *
 *  Created on: Jan 28, 2013
 *      Author: ncc
 */

#include "Parser.h"
#include <cstdlib>
#include <cstdio>
#include <fstream>
#include <iostream>
#include <cstring>
#include "expressions/Push.h"
#include "ExpressionFactory.h"

void Parser::parse(std::string inputFilePath) {
	bool isValid = true;
	char *inputFileCharArray = new char[inputFilePath.size() + 1];
	inputFileCharArray[inputFilePath.size()] = 0;
	std::memcpy(inputFileCharArray, inputFilePath.c_str(), inputFilePath.size());


	std::ifstream input;
	input.open(inputFileCharArray);

	if (!input.is_open()) {
		std::cout << "Could not open file: " << inputFilePath << std::endl;
		std::exit(1);
	}

	std::cout << "START PARSE" << std::endl;

	int i = 1;
	for (std::string line; std::getline (input, line); ) {
		std::map<std::string, Expression>::const_iterator expIterator;
		// TODO - check for blank/empty line

		// find the first space
		Expression expression("");
		std::string::size_type whitespace = line.find(' ', 0);

		if (whitespace != std::string::npos) {
			// found!

			std::string argString = line.substr(whitespace, line.size()-1);
			std::string expString = line.substr(0, whitespace);

			std::cout << argString << std::endl << expString << std::endl;

			expIterator = expressionMap.find(expString);
			if (expIterator == expressionMap.end()) {
				std::cout << "Bad expression found on line: " << i << std::endl;
				std::cout << "\t" << argString << std::endl;
				isValid = false;
			}
			else {
				std::cout << "FOUND: " << (*expIterator).first << std::endl;
			}
		}
		std::cout << "Line " << i++ << ": " << line << std::endl << std::endl;
	}

	if (input.is_open()) {
		input.close();
	}

	if (!isValid) {
		std::cout << std::endl << "______ Bad Jaz ______" << std::endl;
		exit(1);
	}
}

Parser::Parser() {
	std::string expressionStrings[31] = {
			// STACK MANIPULATION
			"push", "rvalue", "lvalue", "pop", ":=", "copy",
			// CONTROL FLOW
			"label", "goto", "gofalse", "gotrue", "halt",
			// ARITHMETIC OPERATORS
			"+", "-", "*", "/", "div",
			// LOGICAL OPERATORS
			"&", "!", "|",
			// RELATIONAL OPERATORS
			"<>", "<=", ">=", "<", ">", "=",
			// OUTPUT
			"print", "show",
			// SUBPROGRAM CONTROL
			"begin", "end", "return", "call"
	};

	typedef Expression (JazExpression::ExpressionFactory::*exp_method_t)(std::string);
	typedef std::map<std::string, exp_method_t> exp_func_map_t;
	exp_func_map_t createMap;

	createMap["push"] = &JazExpression::ExpressionFactory::createPush;

	Expression expressions[] = {

	};

	// Generate a map that will map Strings to Expressions for parsing
	unsigned int i = 0;
	for (i = 0; i < 31; i++) {
//		std::string expressionString = expressionStrings[i];
//		Expression expression = expressions[i];
//		expressionMap.insert(std::pair<std::string, Expression>(expressionString, expression) );
	}

}

Parser::~Parser() {
	// TODO Auto-generated destructor stub
}

