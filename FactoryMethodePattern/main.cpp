#include<iostream>
#include "PizzaStoreFactory.h"
using namespace std;

void testSimpleFactory()
{

}

void testFactoryMethodePattern()
{
	PizzaStore *nyStore = new NYPizzaStore();
	PizzaStore* chicagoStore = new ChicagoStylePizzaStore();

	Pizza* p = nyStore->orderPizza("cheese");
	cout << "\nORDER1:: Ethane Order a " << p->getName() << endl;

	p = chicagoStore->orderPizza("cheese");
	cout << "\nORDER2:: Joel ordered a " << p->getName() << endl;
}

int main()
{
	cout << "MAIN\n";
	testFactoryMethodePattern();
	return 0;
}