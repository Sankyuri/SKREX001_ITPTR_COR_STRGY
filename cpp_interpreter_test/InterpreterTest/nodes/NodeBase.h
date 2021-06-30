#pragma once
#include <vector>
#include "../actions/ActionList.h"


namespace my_test {


class Tokenizer;


// Base of node of script parser
// uses Interpreter pattern, CoR pattern
class NodeBase {
public:
	virtual ~NodeBase() {};

	virtual void parse(Tokenizer &a_toknzr, ActionList &a_act) = 0;


};


}



