//Base Pizza Class
#pragma once
#include<iostream>
#include<vector>
using namespace std;

class Pizza
{
public:
	virtual string getName();
	virtual void prepare();
	virtual void bake() { cout << "\nBaking.. for 25minute at 350F"  << endl; }
	virtual void cut() { cout << "\nCutting..  into diagonal Slices"  << endl; }
	virtual void box() { cout << "\nBoxing.. in Standard Official Box " << endl; }

protected:
	string name, dough, sauce;
	vector<string> topping;
	Pizza(){}
};

string Pizza::getName()
{
	return name;
}

inline void Pizza::prepare()
{
	cout << "Preparing.. " << name << endl;
	cout << "Tossing dough ..." << endl;
	cout << "Adding sauce...\n";
	cout << "Adding Toppings: " << endl;
	for (auto s : topping)
		cout << s << " ";
	cout << endl;
}
