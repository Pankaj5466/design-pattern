#include "subject.h"

void Subject::attach(Observer* ob)
{
	observers.push_back(ob);
}

inline void Subject::detach(Observer* ob)
{
	observers.remove(ob);
}

inline void Subject::notify()
{
	for (auto it = observers.begin(); it != observers.end(); it++)
	{
		(*it)->update(this); //Notify observed to update by calling their function.

	}
}

Subject::~Subject()
{

}

Subject::Subject()
{

}