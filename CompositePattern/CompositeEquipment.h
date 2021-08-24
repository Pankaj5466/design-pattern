#include "Equipment.h"
#include<list>
using namespace std;

class CompositeEquipment :public Equipment
{
public:
	virtual ~CompositeEquipment();
	
	virtual int power() override;
	virtual int netPrice() override;
	virtual int discountPrice() override;
	
	virtual void add(Equipment*) override;
	virtual void remove(Equipment*)override;

protected:
	CompositeEquipment(const char*);
private:
	list<Equipment*> equipement;

};