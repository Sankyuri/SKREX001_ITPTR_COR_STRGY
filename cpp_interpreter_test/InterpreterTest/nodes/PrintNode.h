#pragma once
#include "NodeBase.h"
#include <string>


namespace my_test {


class PrintNode final : public NodeBase {
public:

	void parse(Tokenizer &a_toknzr, ActionList &a_act) override final;


};


}



