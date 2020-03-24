#pragma once
#include "Square.h"
class Diamond :
	public Square
{
protected:
	double h;
public:
	Diamond(double a, double h);

	virtual double Area() const;
};

