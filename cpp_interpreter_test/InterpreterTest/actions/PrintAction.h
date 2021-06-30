#pragma once
#include "ActionBase.h"


namespace my_test {


class PrintAction final : public ActionBase {
public:
	PrintAction(std::string a_text);
	virtual ~PrintAction() {};

	void execute() override final;


private:

	std::string m_text;


};


}



