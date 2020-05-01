#pragma once
#include "Boat.h"
#include "Car.h"

class Amphibia: public Boat, public Car
{
public:
	Amphibia(int x, int y, double length, double beam, double maxSpeed, int numberOfSeats, string color);
	virtual void MoveBy(int deltaX, int deltaY);
	virtual void Display() const;
};

