#include "TScreenWall.h"
#include <iostream>

using namespace std;

TScreenWall::TScreenWall() :TScreenObject(0, 0)
{
	wysokosc = 0;
	dlugosc = 0;
}

void TScreenWall::Wyswietl() const
{
	cout << "TScreenWall " << x << " " << y << " " << wysokosc << " " << dlugosc << endl;
}

void TScreenWall::PrzeunOWektor(int deltaX, int deltaY)
{
	x = x;
	y = y;
}
