#pragma once
#include<list>
#include "observer.h"
using namespace std;

//class Observer; //class fordward declaration

//An Abstract Class to define subject interface

class Subject
{
public:
	virtual ~Subject(); //Use of virtual desturctor: https://stackoverflow.com/questions/461203/when-to-use-virtual-destructors

	virtual void attach(Observer* ob);
	virtual void detach(Observer*);
	virtual void notify();

protected:
	Subject();
	//Has been made protected, so that user cannot instinate the object. (Abstract Class)
	//protected means, not accessable by  Subject class, but accessable to friend or derived class

	//Other way to make abstract class is to define any function as pure virtual.

private:
	list<Observer*> observers;
};


