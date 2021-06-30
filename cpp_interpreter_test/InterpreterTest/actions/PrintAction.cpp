#include "PrintAction.h"
#include <iostream>


my_test::PrintAction::PrintAction(std::string a_text) :
	m_text(a_text)
{

}




void my_test::PrintAction::execute() {
	std::cout << m_text << std::endl;
}



