#pragma once
#include "Tokenizer.h"


my_test::Tokenizer::Tokenizer(const std::string &a_str) :
	m_str(a_str),
	m_ltk(""),
	m_chd(0),
	m_ctl(0)
{
	next(); // find first node
}




// Move cursor to next token.
// @return String of next token.
const std::string &my_test::Tokenizer::next() {
	m_chd = m_str.find_first_not_of(SPACE, m_ctl); // head cursor move to head of next node
	m_ctl = m_str.find_first_of(    SPACE, m_chd); // tail cursor move to tail of next node
	m_ltk = m_str.substr(m_chd, getTokenLength());
	return m_ltk;
}




// Search next token with included by a_idt.
// @return Next token with included by a_idt.
const std::string &my_test::Tokenizer::inclusive(const char *a_idt) {
	m_chd = m_str.find_first_of(a_idt, m_ctl    );     // head cursor move to head of next node
	m_ctl = m_str.find_first_of(
			a_idt, m_chd + (size_t)(1)) + (size_t)(1); // tail cursor move to tail of next node
	m_ltk = m_str.substr(m_chd, getTokenLength());
	return m_ltk;
}



