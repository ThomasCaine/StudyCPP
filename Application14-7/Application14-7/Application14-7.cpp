#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include "Shape.h"
#include "Point.h"
#include "Circle.h"
#include "Cylinder.h"
void virtualViaPointer(Shape *);
void virtualViaReference(Shape &);
int main()
{
	cout << setiosflags(ios::fixed | ios::showpoint) << setprecision(2);
	Point point(7, 11);
	Circle circle(3.5, 22, 8);
	Cylinder cylinder(10, 3.3, 10, 10);
	point.PrintShapeName();
	point.Print();
	cout << '\n';
	circle.PrintShapeName();
	circle.Print();
	cout << '\n';
	cylinder.PrintShapeName();
	cylinder.Print();
	cout << '\n';
	Shape *arrayOfShapes[3];
	arrayOfShapes[0] = &point;
	arrayOfShapes[1] = &circle;
	arrayOfShapes[2] = &cylinder;
	cout << "Virtual function calls made of base-class pointers\n";
	for (int i = 0; i< 3; i++)
		virtualViaPointer(arrayOfShapes[i]);
	cout << "Virtual function calls made of base-class reference\n";
	for (int j = 0; j < 3; j++)
		virtualViaReference(*arrayOfShapes[j]);
    return 0;
}
void virtualViaPointer(Shape *baseClassPtr)
{
	baseClassPtr->PrintShapeName();
	baseClassPtr->Print();
	cout << "\nArea=" << baseClassPtr->Area() << "\nVolume=" << baseClassPtr->Volume() << "\n\n";
}
void virtualViaReference(Shape &baseClassRef)
{
	baseClassRef.PrintShapeName();
	baseClassRef.Print();
	cout << "\nArea=" << baseClassRef.Area() << "\nVolume=" << baseClassRef.Volume() << "\n\n";
	////////////////////////////////////////////////
	////////////////////
	///////////////
}