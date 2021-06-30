#include "ActionHolder.h"
#include "ActionBase.h"


my_test::ActionHolder::ActionHolder(ActionBase *a_act) :
	m_act(a_act),
	m_isCopy(false)
{}


my_test::ActionHolder::ActionHolder(const ActionHolder &_Var) :
	m_act(_Var.m_act),
	m_isCopy(true)
{}








void my_test::ActionHolder::execute()
{
	m_act->execute();
}




void my_test::ActionHolder::release()
{
	if (( ! m_isCopy) && m_act) {
		delete(m_act);
		m_act = nullptr;
	}
}




my_test::ActionHolder my_test::ActionHolder::copy()
{
	ActionHolder res(m_act);
	res.m_isCopy = true;
	return res;
}



