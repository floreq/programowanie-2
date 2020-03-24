#include "Shape.h"
#include <iostream>

using namespace std;

Shape::Shape(string name)
{
	this->name = name;
}

double Shape::Area() const
{
	return 0.0;
}

double Shape::Perimeter() const
{
	return 0.0;
}

ostream& operator<<(ostream& out, const Shape& other)
{
	out << other.name.c_str() << " " << other.Area() << " " << other.Perimeter();
	return out;
}
