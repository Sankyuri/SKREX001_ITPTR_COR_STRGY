#include "ActionList.h"
#include <cassert>


size_t my_test::ActionList::size() {
	return m_list.size();
}


void my_test::ActionList::push_back(my_test::ActionHolder *a_ah) {
	return m_list.push_back(a_ah);
}


my_test::ActionList::ActHldLstItr my_test::ActionList::begin() {
	return m_list.begin();
}


my_test::ActionList::ActHldLstItr my_test::ActionList::end() {
	return m_list.end();
}


void my_test::ActionList::release() {
	for (auto &a: m_list) {
		if (a) {
			a->release();
			delete(a);
			a = nullptr;
		}
	}
}



