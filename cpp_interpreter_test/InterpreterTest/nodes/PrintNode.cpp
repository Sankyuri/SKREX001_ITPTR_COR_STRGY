#include "PrintNode.h"
#include <cassert>
#include "../Tokenizer.h"
#include "../actions/PrintAction.h"




void my_test::PrintNode::parse(my_test::Tokenizer &a_toknzr, my_test::ActionList &a_act) {
	const std::string &str = a_toknzr.token();
	if (str == "print") {
		std::string text = a_toknzr.inclusive("\"\'");
		a_act.push_back(new ActionHolder(new my_test::PrintAction(text.substr(1, text.length() - 2))));
	}
	else {
		assert(true); // End of CoR
	}
}



