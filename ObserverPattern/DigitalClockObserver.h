#pragma once

#include "observer.h"
#include "ClockTimerSubject.h"
#include<iostream>
using namespace std;


class DigitalClock :public Observer
{
public:
	DigitalClock(ClockTimerSubject*); //vs DigitalClock(ClockTimerSubject*) ?
	virtual ~DigitalClock();
	virtual void update(Subject*) override; //Here its Subject and not ClockTimerSubject because, upate is from Observer

private:
	ClockTimerSubject* subjectObj; //an instance of subject
	//Will help in later unsubsribe from observervation
	//Will help if this observer subscriber to multiple subject
};

DigitalClock::DigitalClock(ClockTimerSubject*s)
{
	this->subjectObj = s;
}

inline void DigitalClock::update(Subject* s)
{
	if (s == subjectObj) //this is indeed called by ClockTimerSubject
		//NOTE: here s is of type Subject. And subjectObj is of type ClockTimerSubject
		//via polyMorphism base type point can point to derived type object
	{
		cout << "System Notified that Clock time has been updated to: \n";
		cout << subjectObj->getHour() << " " << subjectObj->getMin() << endl;
	}

}

DigitalClock::~DigitalClock()
{
	
}