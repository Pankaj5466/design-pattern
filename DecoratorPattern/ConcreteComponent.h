#pragma once
//This is Concrete Component of Decorator Pattern

#include "Beverage.h"

class HouseBlend :public Beverage
{
	string description;
public:
	HouseBlend() { description = "House Blend Coffe"; }
	 double cost() override {
		return 1.99;
	}

	 string getDescrpiton() override {
		 return description;
	 }

};

class Espresso : public Beverage
{
	string description;
public:
	Espresso() { description = "Espresso ::  "; }
	double cost() override {
		return 0.89;
	}
	string getDescrpiton() override {
		return description;
	}
};

class DarkRoast : public Beverage
{
	string description;
public:
	DarkRoast() { description = "Dark Roast :: "; }
	double cost() override {
		return 0.99;
	}
	string getDescrpiton() override {
		return description;
	}
};

class Decaf : public Beverage
{
	string description;
public:
	Decaf() { description = "Decaf :: "; }
	double cost() override {
		return 0.99;
	}
	string getDescrpiton() override {
		return description;
	}
};


