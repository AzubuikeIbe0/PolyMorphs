#pragma once
#include <string>
#include <iostream>
using namespace std;

class Shape
{
protected:
	double length;
	double width;
	string name;
public:
	Shape(double length, double width, string& name);
	virtual double CalcArea() const = 0;
	virtual ~Shape(){}
};

