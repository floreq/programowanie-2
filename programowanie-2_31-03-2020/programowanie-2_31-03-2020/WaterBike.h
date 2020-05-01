#pragma once
#include "Bike.h"
#include "WaterVehicle.h"

class WaterBike: public Bike, public WaterVehicle
{
public:
	WaterBike(int x, int y, double maxSpeed, int numberOfSeats, string color, int wheelSize, double length);
	~WaterBike();

	// Bike > LandVehicle
	virtual double GetMaxSpeedOnTheLand() const;
	virtual int GetNumberOfSeats() const;
	// LandVehicle > Vehicle
	virtual int GetX() const;
	virtual int GetY() const;
	virtual void SetX(int newX);
	virtual void SetY(int newY);
	virtual void MoveTo(int newX, int newY);
	virtual void MoveBy(int deltaX, int deltaY);

	virtual void Display() const;
};

