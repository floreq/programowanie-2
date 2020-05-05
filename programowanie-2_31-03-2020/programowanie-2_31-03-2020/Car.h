#pragma once
#include "LandVehicle.h"
#include <string>
using namespace std;

class Car :
	virtual public LandVehicle
{
protected:
	string color;
public:
	Car(int x, int y, double maxSpeed, int numberOfSeats, string color);
	virtual void MoveBy(int deltaX, int deltaY);
	virtual void Display() const; // Klasa Car juz nie jest abstrakcyjna, dlatego deklarujemy Dispaly
};

