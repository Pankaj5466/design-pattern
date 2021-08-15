//Concrete States
//NOTE: Individual class can be implemented in their own file
//NOTE: implmentation can be seperated to .cpp file
#pragma once

#include "State.h"

class NoQuarterState;
class HasQuarterState;
class SoldState;
class SoldOutSate;

class NoQuarterState :public State
{
public:
	static NoQuarterState* instance()
	{
		static NoQuarterState INSTANCE;
		return &INSTANCE;
	}

	virtual void insertQuarter() override
	{
		cout << "you Inserted a Quarter\n";
		changeState(HasQuarterState::instance());
		
	}

};

class HasQuarterState :public State
{
public:
	static HasQuarterState* instance()
	{
		static HasQuarterState INSTANCE;
		return &INSTANCE;
	}

	virtual void turnCrank() override
	{
		cout << "Solding after you turned Crank\n";
		changeState(SoldState::instance());
	}

};

class SoldState :public State
{
public:
	static SoldState* instance()
	{
		static SoldState INSTANCE;
		return &INSTANCE;
	}

public:

	virtual void despense() override
	{
		cout << "Dispensing\n";
		
		gMachine->releaseBall();
		if (gMachine->gCount > 0)
		{
			changeState(NoQuarterState::instance());
		}
		else
		{
			cout << "Machine Need Refilling\n";
			changeState(SoldOutSate::instance());
		}
	}

};

class SoldOutSate :public State
{
public:
	static SoldOutSate* instance()
	{
		static SoldOutSate INSTANCE;
		return &INSTANCE;
	}

	//We can add functions to let insertion of gumbell later into machine also.
	//GumbelInsert ==> go to NoQuarter State
};