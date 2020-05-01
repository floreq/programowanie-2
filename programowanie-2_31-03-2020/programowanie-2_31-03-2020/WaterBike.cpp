#include "WaterBike.h"
#include <iostream>

WaterBike::WaterBike(int x, int y, double maxSpeed, int numberOfSeats, string color, int wheelSize, double length):
	Bike(x, y, maxSpeed, numberOfSeats, color, wheelSize), WaterVehicle(x, y, length)
{
}

WaterBike::~WaterBike()
{
}

double WaterBike::GetMaxSpeedOnTheLand() const
{
	return maxSpeedOnTheLand;
}

int WaterBike::GetNumberOfSeats() const
{
	return numberOfSeats;
}

int WaterBike::GetX() const
{
	return Bike::x;
}

int WaterBike::GetY() const
{
	return Bike::y;
}

void WaterBike::SetX(int newX)
{
	Bike::x = newX;
}

void WaterBike::SetY(int newY)
{
	Bike::y = newY;
}

void WaterBike::MoveTo(int newX, int newY)
{
	Bike::x = newX;
	Bike::y = newY;
}

void WaterBike::MoveBy(int deltaX, int deltaY)
{
	Bike::x += deltaX;
	Bike::y += deltaY;
}

void WaterBike::Display() const
{
	GoToXY(Bike::x, Bike::y);
	cout << "--- WaterBike ---" << endl;
	GoToXY(Bike::x, Bike::y + 1);
	cout << "   __o " << endl;
	GoToXY(Bike::x, Bike::y + 2);
	cout << " _ \<_ " << endl;
	GoToXY(Bike::x, Bike::y + 3);
	cout << "(_)/(_)" << endl;
	GoToXY(Bike::x, Bike::y + 4);
	cout << "---------------------------" << endl;
}
