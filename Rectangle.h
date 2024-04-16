#pragma once
#include "Shape.h"

class Rectangle : public Shape
{
public:
	Rectangle(double w, double l, string& n);
	double CalcArea()const override;
};

