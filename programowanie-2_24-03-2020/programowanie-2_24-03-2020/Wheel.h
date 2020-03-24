#pragma once
#include "Circle.h"
class Wheel :
	public Circle
{
public:
	Wheel(double r);

	virtual double Area() const;
};

