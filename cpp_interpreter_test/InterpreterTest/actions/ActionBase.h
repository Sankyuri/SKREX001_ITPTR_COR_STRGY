#pragma once
#include <string>


namespace my_test {


// base of action
// uses Strategy pattern
class ActionBase {
public:
	virtual ~ActionBase() {};

	virtual void execute() = 0;


};


}



