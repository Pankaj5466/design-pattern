#pragma once
#include "Command.h"
#include <list>
//A MacroCommand manages a sequence of subcommands and providesoperations for addingand removing subcommands.

class MacroCommand :public Command
{
public:
	MacroCommand();
	virtual ~MacroCommand();

	void add(Command*); //add requested command to commandList(cList)
	void remove(Command*); //remove command from list

	virtual void Execute() override;
	virtual void undo() override;

private:
	list<Command*> cList; //command list
};

MacroCommand::MacroCommand()
{

}

inline MacroCommand::~MacroCommand()
{
}

inline void MacroCommand::add(Command* c)
{
	cList.push_back(c);
}

inline void MacroCommand::remove(Command* c)
{
	cList.remove(c); //Extra precatuio of pointer comparions during removal
}

inline void MacroCommand::Execute()
{
	for (auto it = cList.begin(); it != cList.end(); it++)
	{
		(*it)->Execute(); //Execute Each command from list
	}
}

inline void MacroCommand::undo()
{
	for (auto it = cList.begin(); it != cList.end(); it++)
	{
		(*it)->undo(); //undo each command
		//NOTE: for complex structure, undo operation may not revert the state of system fully.
		//if thats the case, then we need to stop undo if it cant be supported.
	}
}
