#pragma once
//This is Component Class of Decorator Design Pattern
#include<string>
using namespace std;

class Beverage
{
public:
	virtual string getDescrpiton() = 0;
	virtual double cost() = 0;
};