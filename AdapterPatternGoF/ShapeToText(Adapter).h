#pragma once

#include "Shape(Adaptee).h"
#include "TextView(Target).h"

//Treat Shape Object as Class Object using Adapter Desing Pattern
class ShapeToTextClassAdapter :public Shape, private TextView
{
public:
	ShapeToTextClassAdapter(){}

	//Override each Shape Function , and call TextObject from there
	virtual void BoundingBox(Point& bottomLeft, Point& topRight) const override;
	virtual bool isEmpty() const override;
	virtual void* CreateManipulator() const override;
};

void ShapeToTextClassAdapter::BoundingBox(Point& bottomLeft, Point& topRight) const
{
	Coord bottom, left, width, height;

	getOrigin(bottom, left); 
	getExtent(width,height);

	//now we know, current possible draw reason in term 
	//bottom,left,width,height

	//Transfor them to Shape variable
	//bottomLeft = Point{ bottom, left };
	//topRight = Point{ bottom + height,left + width };

}

bool ShapeToTextClassAdapter::isEmpty() const
{
	return TextView::isEmpty();
}

void* ShapeToTextClassAdapter::CreateManipulator() const
{
	//Return Mainpulator Pointer
	//NOTE: this is not supported by TextView, but Shape has its implmentation.
	return nullptr;
}
