//This is the base base class for all classes/

typedef watt int;

class Equipment
{
public:
	virtual ~Equipment();

	const char* Name() { return name; }

	virtual int power();
	virtual int netPrice();
	virtual int discountPrice();

	virtual void add(Equipment*);
	virtual void remove(Equipment*);

protected:
	Equipment(const char*);
private:
	const char* name;

};