/*
 * Parser.h
 *
 *  Created on: Jan 28, 2013
 *      Author: ncc
 */

#ifndef PARSER_H_
#define PARSER_H_
#include <string>
#include <vector>
#include <map>
#include "Expression.h"

class Parser {
private:
	std::map<std::string, Expression> expressionMap;    // used for parsing
	std::map<std::string, int> labelMap;                // maps label name to index
	std::vector<Expression> expressionList;             // list of parsed expressions
public:
	void getExpressions(std::vector<Expression>& retValue);
	void parse(std::string);
	Parser();
	virtual ~Parser();
};

#endif /* PARSER_H_ */
