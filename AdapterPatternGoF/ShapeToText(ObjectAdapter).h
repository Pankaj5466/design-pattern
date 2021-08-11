#pragma once

#include "Shape(Adaptee).h"
#include "TextView(Target).h"

//Treat Shape Object as Class Object using Adapter Desing Pattern
class ShapeToTextObjectAdapter :public Shape
{
	TextView* textObject;
public:
	ShapeToTextObjectAdapter(TextView* _o) :textObject(_o){}

	//Override each Shape Function , and call TextObject from there
	virtual void BoundingBox(Point& bottomLeft, Point& topRight) const override;
	virtual bool isEmpty() const override;
	virtual void* CreateManipulator() const override;
};

void ShapeToTextObjectAdapter::BoundingBox(Point& bottomLeft, Point& topRight) const
{
	cout << "Do Operation via ShapeToTextObjectAdapter !\n";
	Coord bottom, left, width, height;

	textObject->getOrigin(bottom, left);
	textObject->getExtent(width, height);

	//now we know, current possible draw reason in term 
	//bottom,left,width,height

	//Transfor them to Shape variable
	//bottomLeft = Point{ bottom, left };
	//topRight = Point{ bottom + height,left + width };

}

bool ShapeToTextObjectAdapter::isEmpty() const
{
	return textObject->isEmpty();
}

void* ShapeToTextObjectAdapter::CreateManipulator() const
{
	//Return Mainpulator Pointer
	//NOTE: this is not supported by TextView, but Shape has its implmentation.
	return nullptr;
}
