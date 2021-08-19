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

#if 0
		p->prepare();
		p->bake();
		p->cut();
		p->box();
#endif

		return p; //Pizza is ready to be served OR sent via Delivery!
	}
};