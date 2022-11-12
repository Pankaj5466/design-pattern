//main.cpp
#include<iostream>
#include<vector>
#include "Command.h"
#include "OpenCommand.h"
#include "PasteCommand.h"
#include "LightOnCommand.h"
#include "SimpleCommandTemplate.h"

using namespace std;

int main() //This is client from our diagram. 
//Client task is to create Concrete command & Assign them to Invokers
{
	cout << "Main Program Handling CommansPattern Tutorial\n\n";

	vector<Command*> vec; //Remote OR Invoker OR Seperate Class 


	notepad* nInstance = nullptr; //This is the receiver (Which knows how to perform the task)
	vec.push_back(new OpenCommand(nInstance)); //Create a concreteCommand & Assign to RemoteInvoker

	Document* doc = nullptr; //Single application can have multiple receiver.
	//A receiver is just a class/function which knows how to performa a task.
	//In our application, notepad clas know how to open & document class knows how to past. (and so many such classes)
	//They together form the complete application
	vec.push_back(new PasteCommand(doc));

	vec[1]->Execute(); //Execute the common stored in that RemoteSlot
	vec[1]->Execute();

	vec[1]->undo();
	vec[0]->undo();

	//Play with light
	light* kitchenLight = new light();
	vec.push_back(new LightOnCommand(kitchenLight));

	//Use Simple Command Template to generate LightOff
	//NOTE: Template way only works if command does not have undo(or undo is impletemed in recievr itself)
	//NOTE: Template will work only if Command does not take any argument
	Command* lightOffCommand = new SimpleCommandTemplate<light>(kitchenLight, &light::off);
	//SimpleCommandTemplate<ReceiverType>(RecieverObject,PointerToRecieverFunction which we want to call on execute)
	vec.push_back(lightOffCommand);

	vec[vec.size() - 1]->Execute();

	return 0;
}
