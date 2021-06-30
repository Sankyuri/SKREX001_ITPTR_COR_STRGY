#pragma once
#include <string>


namespace my_test {


// String to slice to token.
class Tokenizer {
public:
	Tokenizer(const std::string &a_str);




	// Move cursor to next token.
	// @return String of next token.
	const std::string &next();

	// Search next token with included by a_idt.
	// @return Next token with included by a_idt.
	const std::string &inclusive(const char *a_idt);




	// Returns length of current token.
	// @return Length of current token.
	inline size_t getTokenLength() const {
		return m_ctl - m_chd;
	}


	// Check to next token is exist.
	// @return If exist next token when return true.
	inline bool hasNext() const {
		return (std::string::npos != m_str.find_first_not_of(SPACE, m_ctl));
	}


	// Get current token.
	// @return String of current token.
	inline const std::string &token() const {
		return m_ltk;
	}


	// Search next token with included by a_idt.
	// @return Next token with included by a_idt.
	inline const std::string &inclusive(const char a_idt) {
		std::string str = { a_idt };
		return inclusive(str.c_str());
	}




private:
	static constexpr auto SPACE = "\t \r\n";

	std::string  m_str;
	std::string  m_ltk; // last token
	std::size_t  m_chd; // cursor of head on token
	std::size_t  m_ctl; // cursor of tail on token


};


}



