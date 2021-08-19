#include "SimplePizzzaFactory.h"


class PizzaStore
{
	SimplePizzaFactory* factory;
public:
	PizzaStore(SimplePizzaFactory *factory):factory(factory){}

	Pizza* orderPizza(string type)
	{
		Pizza *p = nullptr;

		p = factory->createPizza(type);

		p->prepare();
		p->bake();
		p->cut();
		p->box();

		return p; //Pizza is ready to be served OR sent via Delivery!
	}
};