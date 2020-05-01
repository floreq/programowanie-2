#include <Windows.h>
#include "Vehicle.h"

Vehicle::Vehicle(int x, int y)
{
	this->x = x;
	this->y = y;
}

Vehicle::~Vehicle()
{
}

int Vehicle::GetX() const
{
	return x;
}

int Vehicle::GetY() const
{
	return y;
}

void Vehicle::SetX(int newX)
{
	x = newX;
}

void Vehicle::SetY(int newY)
{
	y = newY;
}

void Vehicle::MoveTo(int newX, int newY)
{
	x = newX;
	y = newY;
}

void Vehicle::MoveBy(int deltaX, int deltaY)
{
	x += deltaX;
	y += deltaY;
}

void GoToXY(int x, int y)
{
	COORD c = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
