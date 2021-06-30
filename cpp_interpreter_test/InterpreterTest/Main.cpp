#include <iostream>
#include <vector>
#include <crtdbg.h>
#include "Parser.h"

int main() {
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	// program file name
	std::string file = "program.txt";

	// Create parser and action list
	my_test::Parser     parser(file);
	my_test::ActionList actlist;

	// parsing
	parser.parse(actlist);


	// execute actions
	for (auto &act: actlist) {
		act->execute();
	}


	// release actions
	actlist.release();


}



