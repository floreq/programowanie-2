#include "Rectangle.h"

Rectangle::Rectangle(double a, double b) : Shape("rectangle")
{
	this->a = a;
	this->b = b;
}

double Rectangle::Area() const
{
	return a*b;
}

double Rectangle::Perimeter() const
{
	return a+b+a+b;
}
