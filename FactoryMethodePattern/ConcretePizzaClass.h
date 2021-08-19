//Concrete Pizza Type

#include"Pizza.h"

class NYStyleCheesePizza : public Pizza
{
public:
	NYStyleCheesePizza()
	{
		name = "NY Style Sauce and Cheese Pizza";
		dough = "Thin Crush Dough";
		sauce = "Marinara Sauce";

		topping.push_back("Grated Reggiano Cheese");
	}
};

class ChicagoStyleCheesePizza :public Pizza
{
public:
	ChicagoStyleCheesePizza()
	{
		name = "Chicago Style Deep Dish Cheese Pizza";
		dough = "Extra thick Crust Dough";
		sauce = "Plum Tomato Sauce";

		topping.push_back("Shredded Mozzarella Cheese");
	}

	virtual void cut() override //Chicago People lice Square slices!, so we will override default
	{
		cout << "Cut the Pizza into Square slice\n"; 
	}
};