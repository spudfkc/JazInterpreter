/*
 * ExpressionFactory.cpp
 *
 *  Created on: Jan 29, 2013
 *      Author: ncc
 */

#include "ExpressionFactory.h"
#include "expressions/Push.h"
#include "expressions/Pop.h"
#include "expressions/Rvalue.h"
#include "expressions/Lvalue.h"
#include "expressions/Assign.h"
#include "expressions/Label.h"
#include "expressions/Goto.h"
#include "expressions/Gofalse.h"
#include "expressions/Gotrue.h"
#include "expressions/Halt.h"
#include "expressions/Addition.h"
#include "expressions/Subtraction.h"
#include "expressions/Multiplication.h"
#include "expressions/Division.h"
#include "expressions/Modulo.h"
#include "expressions/And.h"
#include "expressions/Not.h"
#include "expressions/Or.h"
#include "expressions/NotEqual.h"
#include "expressions/LessEqual.h"
#include "expressions/GreaterEqual.h"
#include "expressions/Less.h"
#include "expressions/Greater.h"
#include "expressions/Equal.h"
#include "expressions/Print.h"
#include "expressions/Show.h"
#include "expressions/Begin.h"
#include "expressions/End.h"
#include "expressions/Call.h"
#include "expressions/Return.h"

namespace JazExpression {

Expression ExpressionFactory::createPush(std::string args) {
	Push push(args);
	return push;
}

Expression ExpressionFactory::createRvalue(std::string args) {
	Rvalue rvalue(args);
	return rvalue;
}

Expression ExpressionFactory::createLvalue(std::string args) {
	Lvalue lvalue(args);
	return lvalue;
}

Expression ExpressionFactory::createPop(std::string args) {
	Pop pop(args);
	return pop;
}

Expression ExpressionFactory::createAssign(std::string args) {
	Assign assign(args);
	return assign;
}

Expression ExpressionFactory::createLabel(std::string args) {
	Label label(args);
	return label;
}

Expression ExpressionFactory::createGoto(std::string args) {
	Goto g(args);
	return g;
}

Expression ExpressionFactory::createGofalse(std::string args) {
	Gofalse gf(args);
	return gf;
}

Expression ExpressionFactory::createGotrue(std::string args) {
	Gotrue gt(args);
	return gt;
}

Expression ExpressionFactory::createHalt(std::string args) {
	Halt h(args);
	return h;
}

Expression ExpressionFactory::createAddition(std::string args) {
	Addition add(args);
	return add;
}

Expression ExpressionFactory::createSubtraction(std::string args) {
	Subtraction subtract(args);
	return subtract;
}

Expression ExpressionFactory::createMultiplication(std::string args) {
	Multiplication mul(args);
	return mul;
}

Expression ExpressionFactory::createDivision(std::string args) {
	Division d(args);
	return d;
}
Expression ExpressionFactory::createModulo(std::string args) {
	Modulo m(args);
	return m;
}

Expression ExpressionFactory::createAnd(std::string args) {
	And a(args);
	return a;
}

Expression ExpressionFactory::createNot(std::string args) {
	Not n(args);
	return n;
}

Expression ExpressionFactory::createOr(std::string args) {
	Or o(args);
	return o;
}

Expression ExpressionFactory::createNotEqual(std::string args) {
	NotEqual ne(args);
	return ne;
}

Expression ExpressionFactory::createLessEqual(std::string args) {
	LessEqual le(args);
	return le;
}

Expression ExpressionFactory::createGreaterEqual(std::string args) {
	GreaterEqual ge(args);
	return ge;
}

Expression ExpressionFactory::createLess(std::string args) {
	Less l(args);
	return l;
}

Expression ExpressionFactory::createGreater(std::string args) {
	Greater g(args);
	return g;
}

Expression ExpressionFactory::createEqual(std::string args) {
	Equal e(args);
	return e;
}


Expression ExpressionFactory::createPrint(std::string args) {
	Print p(args);
	return p;
}

Expression ExpressionFactory::createShow(std::string args) {
	Show s(args);
	return s;
}

Expression ExpressionFactory::createBegin(std::string args) {
	Begin b(args);
	return b;
}

Expression ExpressionFactory::createEnd(std::string args) {
	End e(args);
	return e;
}

Expression ExpressionFactory::createReturn(std::string args) {
	Return r(args);
	return r;
}

Expression ExpressionFactory::createCall(std::string args) {
	Call c(args);
	return c;
}

ExpressionFactory::ExpressionFactory() {
	// TODO Auto-generated constructor stub

}

ExpressionFactory::~ExpressionFactory() {
	// TODO Auto-generated destructor stub
}

} /* namespace JazExpression */
