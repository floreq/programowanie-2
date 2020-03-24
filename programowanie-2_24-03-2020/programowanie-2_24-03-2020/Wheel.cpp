#include "Wheel.h"

Wheel::Wheel(double r) : Circle(r)
{
	this->name = "wheel";
}

double Wheel::Area() const
{
	return 3.1415*r*r;
}
