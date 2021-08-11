//This is the class which is new. 
//We will use the help of Adaptee to call API's of Target

#pragma once
#include<iostream>
using namespace std;
struct Point
{
	int x, y;
};

class Shape
{
public:
	virtual void BoundingBox(Point& bottomLeft, Point& bottomRight) const ;
	virtual bool isEmpty() const ;
	virtual void* CreateManipulator() const ; //target need to cast to Manipulator*
};

void Shape::BoundingBox(Point& bottomLeft, Point& bottomRight) const
{
	cout << "Do Operation via ShapeDirectly\n";
}
inline bool Shape::isEmpty() const
{
	cout << "Do Operation via ShapeDirectly\n";
	return false;
}
inline void* Shape::CreateManipulator() const
{
	cout << "Do Operation via ShapeDirectly\n";
	return nullptr;
}