#include "Boat.h"
#include <iostream>

using namespace std;

Boat::Boat(int x, int y, double length, double beam): Vehicle(x, y), WaterVehicle(x, y, length)
{
	this->beam = beam;
}

void Boat::Display() const
{
	GoToXY(x, y);
	cout << "--- Boat (" << beam << ") ---" << endl;
	GoToXY(x, y + 1);
	cout << "        _    _" << endl;
	GoToXY(x, y + 2);
	cout << "     __|_|__|_|__" << endl;
	GoToXY(x, y + 3);
	cout << "   _|____________|__" << endl;
	GoToXY(x, y + 4);
	cout << "  |o o o o o o o o /  hjw" << endl;
	GoToXY(x, y + 5);
	cout << "~'`~'`~'`~'`~'`~'`~'`~" << endl;
}
