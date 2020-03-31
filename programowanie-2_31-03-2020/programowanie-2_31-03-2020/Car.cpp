#include "Car.h"
#include <iostream>
#include <Windows.h>

using namespace std;

Car::Car(int x, int y, double maxSpeed, int numberOfSeats, string color) : LandVehicle(x, y, maxSpeed, numberOfSeats)
{
	this->color = color;
}

void Car::Display() const
{
	cout << "--- Car (" << color << ") ---" << endl;
	GoToXY(x, y);
	cout << "  ______" << endl;
	GoToXY(x, y + 1);
	cout << " /|_||_\\`.__" << endl;
	GoToXY(x, y + 2);
	cout << "(   _    _ _\\" << endl;
	GoToXY(x, y + 3);
	cout << "=`-(_)--(_)-'" << endl;
	cout << "---------------------------" << endl;
}
