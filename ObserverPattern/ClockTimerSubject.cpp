#include "ClockTimerSubject.h"


void ClockTimerSubject::tick()
{
	//update interal time-keeping state
	hr = getHour();
	min = getMin();
	sec = getSec();

	//Call observer to update
	notify(); //Defined in Base class, but we can override if needed to change update sequence
}

inline int ClockTimerSubject::getHour()
{
	//Query the system about current status
	return 0;
}

inline int ClockTimerSubject::getMin()
{
	//Query the system about current status
	return 0;
}

inline int ClockTimerSubject::getSec()
{
	//Query the system about current status
	return 0;
}