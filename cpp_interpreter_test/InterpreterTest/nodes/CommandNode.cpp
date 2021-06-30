#include "CommandNode.h"
#include <cassert>
#include "../Tokenizer.h"
#include "LoopNode.h"




void my_test::CommandNode::parse(my_test::Tokenizer &a_toknzr, my_test::ActionList &a_act) {
	assert(a_toknzr.token() == "begin");
	while (true) {
		assert(a_toknzr.hasNext());
		if (a_toknzr.next() == "end") {    return;    }
		else {
			LoopNode nd;
			nd.parse(a_toknzr, a_act);
		}
	}
}



