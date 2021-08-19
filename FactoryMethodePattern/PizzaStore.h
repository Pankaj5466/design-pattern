//This is framework of 'factory methode' pizza store
#include<string>
#include "Pizza.h"

using namespace std;

class PizzaStore
{
public:
	Pizza* orderPizza(string type)
	{
		Pizza* p = createPizza(type);

		p->prepare();
		p->bake();
		p->cut();
		p->box();

		return p;
	}
protected:
	virtual Pizza* createPizza(string type) = 0; //Abstract methode
	PizzaStore() {} //making class abstract
};