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
	typedef Expression (JazExpression::ExpressionFactory::*exp_method_t)(std::string);
	typedef std::map<std::string, exp_method_t> exp_func_map_t;
	exp_func_map_t createMap;

	createMap["push"] = &JazExpression::ExpressionFactory::createPush;
	createMap["rvalue"] = &JazExpression::ExpressionFactory::createRvalue;
	createMap["lvalue"] = &JazExpression::ExpressionFactory::createLvalue;
	createMap["pop"] = &JazExpression::ExpressionFactory::createPop;
	createMap[":="] = &JazExpression::ExpressionFactory::createAssign;

	createMap["label"] = &JazExpression::ExpressionFactory::createLabel;
	createMap["goto"] = &JazExpression::ExpressionFactory::createGoto;
	createMap["gofalse"] = &JazExpression::ExpressionFactory::createGofalse;
	createMap["gotrue"] = &JazExpression::ExpressionFactory::createGotrue;
	createMap["halt"] = &JazExpression::ExpressionFactory::createHalt;

	createMap["+"] = &JazExpression::ExpressionFactory::createAddition;
	createMap["-"] = &JazExpression::ExpressionFactory::createSubtraction;
	createMap["*"] = &JazExpression::ExpressionFactory::createMultiplication;
	createMap["/"] = &JazExpression::ExpressionFactory::createDivision;
	createMap["div"] = &JazExpression::ExpressionFactory::createModulo;

	createMap["&"] = &JazExpression::ExpressionFactory::createAnd;
	createMap["!"] = &JazExpression::ExpressionFactory::createNot;
	createMap["|"] = &JazExpression::ExpressionFactory::createOr;

	createMap["<>"] = &JazExpression::ExpressionFactory::createNotEqual;
	createMap["<="] = &JazExpression::ExpressionFactory::createLessEqual;
	createMap[">="] = &JazExpression::ExpressionFactory::createGreaterEqual;
	createMap["<"] = &JazExpression::ExpressionFactory::createLess;
	createMap[">"] = &JazExpression::ExpressionFactory::createGreater;
	createMap["="] = &JazExpression::ExpressionFactory::createEqual;

	createMap["print"] = &JazExpression::ExpressionFactory::createPrint;
	createMap["show"] = &JazExpression::ExpressionFactory::createShow;

	createMap["begin"] = &JazExpression::ExpressionFactory::createBegin;
	createMap["end"] = &JazExpression::ExpressionFactory::createEnd;
	createMap["return"] = &JazExpression::ExpressionFactory::createReturn;
	createMap["call"] = &JazExpression::ExpressionFactory::createCall;
}

Parser::~Parser() {
	// TODO Auto-generated destructor stub
}

