#include "Amphibia.h"
#include <iostream>

using namespace std;

Amphibia::Amphibia(int x, int y, double length, double beam, double maxSpeed, int numberOfSeats, string color): 
	Boat(x, y, length, beam), Car(x, y, maxSpeed, numberOfSeats, color)
{
}

void Amphibia::MoveBy(int deltaX, int deltaY)
{
	Vehicle::MoveBy(3 * deltaX, 3 * deltaY);
}

void Amphibia::Display() const
{
	// Trzeba powiedziec skad pobrac wartosc, np. Car::x
	GoToXY(Car::x, Car::y);
	cout << "--- Boat and Car (" << color << ") ---" << endl;
	GoToXY(Boat::x, Boat::y + 1);
	cout << "  ______" << endl;
	GoToXY(Car::x, Car::y + 2);
	cout << " /|_||_\\`.__" << endl;
	GoToXY(Car::x, Car::y + 3);
	cout << "(   _    _ _\\" << endl;
	GoToXY(Car::x, Car::y + 4);
	cout << "=`-(_)--(_)-'  hjw" << endl;
	GoToXY(Car::x, Car::y + 5);
	cout << "---------------------------" << endl;
}
