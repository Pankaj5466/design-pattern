#pragma once
//This is the target object which is already implemented.
//We we finially call its API's via Adaptee to process our request.

struct Coord
{
	int x, y;
};

//For TextView Boundary Object is defined by origin coordinate and width + height
class TextView
{
public:
	TextView(){}
	void getOrigin(Coord& x, Coord& y) const; //get the current origin from current diagram
	void getExtent(Coord& width, Coord& height) const; //get the max stregth limit
	virtual bool isEmpty() const;
};

//Do something(Predefined operation)
void TextView::getOrigin(Coord& x, Coord& y) const
{
}
inline void TextView::getExtent(Coord& width, Coord& height) const
{
}
inline bool TextView::isEmpty() const
{
	return false;
}