#pragma once

//#include "subject.h"

class Subject; //forward declaration

//An Abstract Class defining Observer Interface
class Observer
{
public:
	virtual ~Observer() //To sum up, always make base classes' destructors virtual when they're meant to be manipulated polymorphically.
	{
		//https://stackoverflow.com/questions/461203/when-to-use-virtual-destructors
		//Destroy 
	}
	virtual void update(Subject* modifiedSubject) = 0;

protected:
	Observer(){}
 };
