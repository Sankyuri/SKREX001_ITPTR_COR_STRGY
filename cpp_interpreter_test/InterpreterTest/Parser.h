#pragma once
#include "Tokenizer.h"
#include <string>
#include <vector>
#include "actions/ActionList.h"


namespace my_test {


// script file parser
class Parser {
public:
	// @param a_file    script file path
	Parser(const std::string &a_file);
	~Parser();

	
	// @param a_act    parse result write to
	void parse(ActionList &a_act);




private:

	Tokenizer *m_tok;




};


}



