#include "Car.h"
#include <iostream>

using namespace std;

Car::Car(int x, int y, double maxSpeed, int numberOfSeats, string color) : LandVehicle(x, y, maxSpeed, numberOfSeats)
{
	this->color = color;
}

void Car::MoveBy(int deltaX, int deltaY)
{
	Vehicle::MoveBy(2 * deltaX, 2 * deltaY);
}

void Car::Display() const
{
	GoToXY(x, y);
	cout << "--- Car (" << color << ") ---" << endl;
	GoToXY(x, y + 1);
	cout << "  ______" << endl;
	GoToXY(x, y + 2);
	cout << " /|_||_\\`.__" << endl;
	GoToXY(x, y + 3);
	cout << "(   _    _ _\\" << endl;
	GoToXY(x, y + 4);
	cout << "=`-(_)--(_)-'  hjw" << endl;
	GoToXY(x, y + 5);
	cout << "---------------------------" << endl;
}
