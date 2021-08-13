#include<iostream>
using namespace std;
#include "DigitalClockObserver.h"
#include "ClockTimerSubject.h"

int main()
{
	ClockTimerSubject* timer = new ClockTimerSubject();
	DigitalClock* digitalClock = new DigitalClock(timer);

	cout << "Tick()\n";
	timer->tick();

	cout << "ticking again\n";
	timer->tick();



	return 0;
}