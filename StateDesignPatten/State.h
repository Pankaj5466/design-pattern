
//An Abstract Interface
#include<iostream>
using namespace std;
#include "GumbellMachine.h"

class State
{
	
public:	
	static GumbellMachine* gMachine; //These state are linked to this Context Machine
	//There will be only 1 static instace for all derived class

	virtual void insertQuarter() { cout << "Can not Insert Quarter\n"; }
	virtual void ejectQuarter() { cout << "Can not eject\n"; }
	virtual void turnCrank() { cout << "Turning not possibe\n"; }
	virtual void despense() { cout << "Can not dispense\n"; }

protected:
	void changeState(State* nState)
	{
		gMachine->changeState(nState);
	}
};



;