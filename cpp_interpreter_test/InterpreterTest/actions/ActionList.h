#pragma once
#include <vector>
#include "ActionHolder.h"


namespace my_test {


class ActionList {
	using ActHldLst    = std::vector<ActionHolder *>;
	using ActHldLstItr = ActHldLst::iterator;
public:

	void   push_back(ActionHolder *a_ah);
	size_t size();

	ActHldLst::iterator begin();
	ActHldLst::iterator end();

	void release();




	ActionHolder &operator [](int a_idx) {
		return *m_list[a_idx];
	}




private:

	ActHldLst m_list;


};


}



