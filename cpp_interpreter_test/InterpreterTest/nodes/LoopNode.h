#pragma once
#include "NodeBase.h"


namespace my_test {


class LoopNode final : public NodeBase {
public:

	void parse(Tokenizer &a_toknzr, ActionList &a_act) override final;


};


}



