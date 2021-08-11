//This is the class which is new. 
//We will use the help of Adaptee to call API's of Target

#pragma once
struct Point
{
	int x, y;
};

class Shape
{
public:
	virtual void BoundingBox(Point& bottomLeft, Point& bottomRight) const = 0;
	virtual bool isEmpty() const = 0;
	virtual void* CreateManipulator() const = 0; //target need to cast to Manipulator*
};