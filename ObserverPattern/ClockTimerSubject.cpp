#include "ClockTimerSubject.h"
#include<iostream>
using namespace std;

static int t = 0;
void ClockTimerSubject::tick()
{
	//update interal time-keeping state
	cout << "System Notificed about time change\n";
	hr = getHour();
	min = getMin();
	sec = getSec();

	//Call observer to update
	notify(); //Defined in Base class, but we can override if needed to change update sequence
}

inline int ClockTimerSubject::getHour()
{
	//Query the system about current status
	return t++;
}

inline int ClockTimerSubject::getMin()
{
	//Query the system about current status
	return t++;
}

inline int ClockTimerSubject::getSec()
{
	//Query the system about current status
	return t++;
}

ClockTimerSubject::ClockTimerSubject()
{

}

ClockTimerSubject::~ClockTimerSubject()
{

}