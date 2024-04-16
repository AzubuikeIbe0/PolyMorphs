#include "Rectangle.h"

Rectangle::Rectangle(double w, double l, string& n) : Shape(w, l, n){}

double Rectangle::CalcArea() const
{
	double Area = length * width;
	return Area;
}
