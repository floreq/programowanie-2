#include "Circle.h"

// Musimy tutaj wywolac konstruktor z Shape
Circle::Circle(double r): Shape("circle")
{
	this->r = r;
}

double Circle::Perimeter() const
{
	return 2*3.1415*r;
}
