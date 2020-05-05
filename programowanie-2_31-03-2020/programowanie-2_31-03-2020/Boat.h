#pragma once
#include "WaterVehicle.h"
class Boat :
	virtual public WaterVehicle
{
protected:
	double beam;
public:
	Boat(int x, int y, double length, double beam);
	virtual void Display() const;
};

