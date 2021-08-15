#include "GumbellMachine.h"
#include "ConcreteState.h"

GumbellMachine::GumbellMachine(int nGumbell)
{
	gCount = nGumbell;
	State::gMachine = this; //State will hold instance of this machine

	if (gCount > 0)
		cState = NoQuarterState::instance();
	else
		cState = SoldOutSate::instance();
}

inline void GumbellMachine::insertQuarter()
{
	cState->insertQuarter();
}

inline void GumbellMachine::ejectQuarter()
{
	cState->ejectQuarter();
}

inline void GumbellMachine::turnCrank()
{
	cState->turnCrank();
	cState->despense(); //its an internal state, and it dependes upon turnCrank
}

void GumbellMachine::changeState(State* nState)
{
	cState = nState;
}

void GumbellMachine::releaseBall()
{
	cout << "Releating 1 Gumbell\n";
	gCount = gCount - 1;
}
