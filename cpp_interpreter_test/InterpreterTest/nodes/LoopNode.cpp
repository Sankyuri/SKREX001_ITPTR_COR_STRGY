#include "LoopNode.h"
#include "../Tokenizer.h"
#include "CommandNode.h"
#include "PrintNode.h"




void my_test::LoopNode::parse(my_test::Tokenizer &a_toknzr, my_test::ActionList &a_act) {
	const std::string &str = a_toknzr.token();
	if (str == "loop") {
		const int loopCnt  = std::stoi(a_toknzr.next()) - 1;
		const int posStart = a_act.size();

		a_toknzr.next(); // to next token
		CommandNode nd;
		nd.parse(a_toknzr, a_act);

		const int posEnd   = a_act.size();
		for (int cnt = 0; cnt < loopCnt; ++cnt) {
			for (int i = posStart; i < posEnd; ++i) {
				a_act.push_back(new ActionHolder(a_act[i]));
			}
		}
	}
	else {
		PrintNode nd;
		nd.parse(a_toknzr, a_act);
	}
}



