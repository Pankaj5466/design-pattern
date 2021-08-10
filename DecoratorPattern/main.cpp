#include<iostream>
#include "ConcreteDecorator.h"
#include "ConcreteComponent.h"
using namespace std;

int main()
{
	cout << "Hello\n";

	Beverage *beverage = new DarkRoast();

	beverage = new Mocha(beverage);
	beverage = new Milk(beverage);
	beverage = new Mocha(beverage);

	printf("On DarkRoast, Mocha + Milk + Mocha topping has been addded\n");
	printf("Iteam = %s, price = %.4f\n", beverage->getDescrpiton().c_str(), beverage->cost());
	return 0;
}