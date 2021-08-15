//This is context of stateDesign Diagram
#pragma once

class State; //Fordward declartion of state (As State already included Gumbell, so to brak cyclic depednecy)


class GumbellMachine
{
public:
	GumbellMachine(int nGumbell);
public:
	void insertQuarter();
	void ejectQuarter();
	void turnCrank();

	void changeState(State*);
	int gCount;
	void releaseBall();

protected:
	State* cState;
};
