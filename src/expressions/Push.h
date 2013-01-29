/*
 * Push.h
 *
 *  Created on: Jan 28, 2013
 *      Author: ncc
 */

#ifndef PUSH_H_
#define PUSH_H_
#include "../Expression.h"

namespace JazExpression {

class Push : public Expression {
public:
	void interpret(Context*, int);
	Push();
	virtual ~Push();
};

} /* namespace JazExpression */
#endif /* PUSH_H_ */
