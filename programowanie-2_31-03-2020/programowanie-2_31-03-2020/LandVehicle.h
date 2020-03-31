#pragma once
#include "Vehicle.h"
class LandVehicle :
	public Vehicle
{
protected: 
	double maxSpeedOnTheLand;
	int numberOfSeats;
public:
	LandVehicle(int x, int y, double maxSpeedOnTheLand, int numberOfSeats);

	virtual double GetMaxSpeedOnTheLand() const;
	virtual int GetNumberOfSeats() const;
};

