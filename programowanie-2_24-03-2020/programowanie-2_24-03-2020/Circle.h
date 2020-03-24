#pragma once
#include "Shape.h"

// Tworzenie klasy, ktora dziedziczy
// :public lub :protected lub :private
class Circle :public Shape 
{
protected:
	double r;
public:
	Circle(double r);

	virtual double Perimeter() const; // Jak  chcemy nadpisac klase z tej co dziedziczymy to musi byc identycznie zadeklarowana jak w Shape
};

