#pragma once
#include<iostream>
using namespace std;

class Command
{
public:
	virtual ~Command(); //destruction of this class is delegated to subclass
	virtual void Execute() = 0; //Making calss abstract

	virtual void undo();
protected:
	Command(); //Making class abstract
};

inline void Command::undo()
{
	cout << "Undo Command NOT supported\n";
}

Command::~Command()
{

}

Command::Command()
{

}