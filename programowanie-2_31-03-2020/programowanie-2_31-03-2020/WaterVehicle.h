#pragma once
#include "Vehicle.h"
class WaterVehicle :
	virtual public Vehicle
{
protected:
	double length;
public:
	WaterVehicle(int x, int y, double length);
};

