#pragma once
#include "Command.h"

typedef struct light
{
	void on() { cout << "Light: On\n"; }
	void off() { cout << "Light: Off\n"; }
};

class LightOnCommand :public Command
{
public:
	LightOnCommand(light*);

	virtual void Execute() override;
	virtual void undo() override;

private:
	int pState;
	light* lInstance; //light Instance
};

inline void LightOnCommand::Execute()
{
	cout << "Turning light on\n";
	pState = 1;
	//lInstance.on();
}

LightOnCommand::LightOnCommand(light* l)
{
	pState = 0;
	lInstance = l;
}

inline void LightOnCommand::undo()
{
	cout << "Make Light Off\n";
#if 0
	if (pState == 1)
		lInstance.off();
#endif
}