#pragma once
#include "Shape.h"
class Rectangle :
	public Shape
{
protected:
	double a;
	double b;
public:
	Rectangle(double a, double b);

	virtual double Area() const;
	virtual double Perimeter() const;
};

