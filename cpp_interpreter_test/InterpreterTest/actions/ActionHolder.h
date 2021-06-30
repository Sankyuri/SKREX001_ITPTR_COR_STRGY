#pragma once


namespace my_test {


class ActionBase;


class ActionHolder {
public:

	// @deprecated Please use ActionList class
	ActionHolder(ActionBase *a_act);
	ActionHolder(const ActionHolder &_Var);


	void execute();

	void release();

	ActionHolder copy();


private:
	ActionBase *m_act;
	bool        m_isCopy;


};


}



