#include "Parser.h"
#include <string>
#include <fstream>
#include "Tokenizer.h"
#include "nodes/CommandNode.h"




my_test::Parser::Parser(const std::string &a_file) :
	m_tok(nullptr)
{
	std::ifstream ifs(a_file);
	std::string str = std::string(std::istreambuf_iterator<char>(ifs),
						          std::istreambuf_iterator<char>());
	m_tok = new Tokenizer(str);
	ifs.close();
}


my_test::Parser::~Parser()
{
	delete(m_tok);
}



	
void my_test::Parser::parse(my_test::ActionList &a_act) {
	CommandNode nd;
	nd.parse(*m_tok, a_act);
}



