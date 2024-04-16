#include <iostream>
#include <string>
#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"
using namespace std;

int main()
{

	Shape* S1[10];


    // Creating instances of Rectangle and Circle
    Rectangle R1(5.0, 4.0, "Rectangle");
    Circle C1(3.0, "Circle");

    // Assigning the addresses of Rectangle and Circle objects to Shape pointers
    S1[0] = &R1;
    S1[1] = &C1;

    // Calling calculateArea() for each shape using polymorphism
    for (int i = 0; i < 10; ++i) {
        std::cout << "Area of shape " << i + 1 << ": " << S1[i]->CalcArea() << std::endl;
    }


	return 0;
}