#pragma once
#include "Beverage.h"
class CondimentDecorator :public Beverage
{
	virtual string getDescrpiton() override = 0;
	virtual double cost() override = 0;
};