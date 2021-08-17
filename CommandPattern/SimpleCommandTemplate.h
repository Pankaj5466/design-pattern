#pragma once
#include "Command.h"

//Receiver is instance which knows how to perform operation.
//Ex: reciiver is light, then light.off() knows how to 
template<class Receiver>
class SimpleCommandTemplate final :public Command
{
public:
	typedef void (Receiver::* Action)(); //Action will be a fucntion pointer, that can point to a Function of Receiver type class

	SimpleCommandTemplate(Receiver* r, Action a) :_action(a), _receiver(r) {}

	virtual void Execute() override
	{
		(_receiver->*_action)(); //Call member Function via Function Pointer
	}

private:
	Action _action;
	Receiver* _receiver;
};


