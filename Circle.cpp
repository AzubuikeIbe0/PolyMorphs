#include "Circle.h"

Circle::Circle(double radius) : Shape(length, width, name){}

double Circle::CalcArea() const
{
	const double pi = 3.14159;
	double Area = pi * (radius * radius);
	return Area;
}
