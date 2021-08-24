#include"Equipment.h"

class FloppyDisk :public Equipment
{
public:
	FloppyDisk(const char*);
	virtual ~FloppyDisk();

	virtual int power() override;
	virtual int netPrice() override;
	virtual int discountPrice() override;
};