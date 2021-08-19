#include<string>
#include<unordered_map>
using namespace std;

class Pizza;
class CheesePizza;
class PepperoniPizza;

//unordered_map<string, int> pizzaType;

class SimplePizzaFactory
{
public:
	Pizza* createPizza(string type)
	{
		Pizza *p = nullptr;

		if (type._Equal("cheese"))
			p = nullptr;// new CheesePizza();
		else if (type._Equal("pepperoni"))
			p = nullptr; // new PepperoniPizza();
	}

	return p;
};