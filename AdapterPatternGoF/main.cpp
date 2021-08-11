#include<iostream>
#include "TextView(Target).h"
#include "Shape(Adaptee).h"

#include "ShapeToText(Adapter).h"
using namespace std;

int main()
{
	cout << "Main Start\n";

	//We will now work on Shape object, which will enternally communate with TextObject to get its work done.
	//it can do seperate work also(like Manipulation) which TextView does not support

	ShapeToTextClassAdapter *shapeAdapter = new ShapeToTextClassAdapter();

	Point bottomLeft, bottomRight;
	shapeAdapter->BoundingBox(bottomLeft, bottomRight); //get Drawing reason

	void* manipulatorObject = shapeAdapter->CreateManipulator(); //using this we can perfrom some operation on set of Shape objects.
	//doMove(manipulatorObject)

	Shape s;
	s.BoundingBox(bottomLeft,bottomRight);


	return 0;
}