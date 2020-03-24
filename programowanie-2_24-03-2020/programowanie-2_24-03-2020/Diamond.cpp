#include "Diamond.h"

Diamond::Diamond(double a, double h) : Square(a)
{
	this->h = h;
	this->name = "diamond";
}

double Diamond::Area() const
{
	return a*h;
}
