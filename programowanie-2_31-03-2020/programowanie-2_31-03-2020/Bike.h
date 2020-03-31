#pragma once
#include "LandVehicle.h"
#include <string>
using namespace std;
class Bike :
	public LandVehicle
{
protected:
	string color;
	int wheelSize;
public:
	Bike(int x, int y, double maxSpeed, int numberOfSeats, string color, int wheelSize);
	virtual void Display() const;
};

