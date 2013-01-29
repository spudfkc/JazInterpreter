//============================================================================
// Name        : JazInt.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


/**********************************************************
 ****************** TODO List *****************************
 **********************************************************
 *
 * Add JazInterpreter namespace to all classes
 *
 * update #includes to use namespaces over relative paths
 *
 *
 **********************************************************
 */


#include <iostream>
#include "Parser.h"

using namespace std;

int main() {
	std::string fp = "/home/ncc/tmp/file.test";
	Parser *p = new Parser();
	p->parse(fp);

	return 0;
}
