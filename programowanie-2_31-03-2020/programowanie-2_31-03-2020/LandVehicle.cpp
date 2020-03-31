#include "LandVehicle.h"

LandVehicle::LandVehicle(int x, int y, double maxSpeedOnTheLand, int numberOfSeats) : Vehicle(x, y)
{
	this->maxSpeedOnTheLand = maxSpeedOnTheLand;
	this->numberOfSeats = numberOfSeats;
}

double LandVehicle::GetMaxSpeedOnTheLand() const
{
	return maxSpeedOnTheLand;
}

int LandVehicle::GetNumberOfSeats() const
{
	return numberOfSeats;
}
