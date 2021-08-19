//This is framework of 'factory methode' pizza store
#include<string>

using namespace std;

class PizzaStore :public Pizza;
{
	Pizza* orderPizza(string type)
	{
		Pizza* p = ccreatePizza(type);
	}
};