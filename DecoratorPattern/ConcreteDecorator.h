#pragma once
//All type of Concrete Decorator
#include "Decorator.h"
#include<string>
using namespace std;

class Milk :public CondimentDecorator
{
	Beverage *beverage;

public:
	Milk(Beverage *bev)
	{
		this->beverage = bev;
	}
	string getDescrpiton() override
	{
		return beverage->getDescrpiton() + " + Milk";
	}
	double cost() override {
		return beverage->cost() + 0.10;
	}
};

class Mocha :public CondimentDecorator
{

	Beverage *beverage;

public:
	Mocha(Beverage *bev)
	{
		this->beverage = bev;
	}
	string getDescrpiton() override
	{
		return beverage->getDescrpiton() + "+ Mocha";
	}
	double cost() override {
		return beverage->cost() + 0.20;
	}
};

class Soy :public CondimentDecorator
{

	Beverage *beverage;

public:
	Soy(Beverage *bev)
	{
		this->beverage = bev;
	}
	string getDescrpiton() override
	{
		return beverage->getDescrpiton() + " + Soy";
	}
	double cost() override {
		return beverage->cost() + 0.15;
	}
};

class Whip :public CondimentDecorator
{

	Beverage *beverage;

public:
	Whip(Beverage *bev)
	{
		this->beverage = bev;
	}
	string getDescrpiton() override
	{
		return beverage->getDescrpiton() + " + Whip";
	}
	double cost() override {
		return beverage->cost() + 0.10;
	}
};