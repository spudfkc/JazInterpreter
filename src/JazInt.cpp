//============================================================================
// Name        : JazInt.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Parser.h"

using namespace std;

int main() {
	//cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	std::string fp = "/home/ncc/tmp/file.test";
	Parser *p = new Parser();
	p->parse(fp);



	//cout << "!!!Goodbye world!!!" << endl;
	return 0;
}
