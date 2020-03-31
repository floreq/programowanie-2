#include "Bike.h"
#include <iostream>

Bike::Bike(int x, int y, double maxSpeed, int numberOfSeats, string color, int wheelSize) : LandVehicle(x, y, maxSpeed, numberOfSeats)
{
	this->color = color;
	this->wheelSize = wheelSize;
}

void Bike::Display() const
{
	cout << "--- Bike (" << color << ") ---" << endl;
	GoToXY(x, y);
	cout << "   __o " << endl;
	GoToXY(x, y + 1);
	cout << " _ \<_ " << endl;
	GoToXY(x, y + 2);
	cout << "(_)/(_)" << endl;
	cout << "---------------------------" << endl;
}


