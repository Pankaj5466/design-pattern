#pragma once
#include "subject.h"

//An concrete subject
//Sotes values which need to be updated. & handled the flow cycle

class ClockTimerSubject :public Subject
{
public:
	ClockTimerSubject();
	~ClockTimerSubject();
	int getHour(); //Virtual can be omitted
	int getMin();
	int getSec();

	void tick(); //this will be called by some system level state machine. 
	//calling this means any of the values has been changed

private:
	int hr, min, sec;
};
