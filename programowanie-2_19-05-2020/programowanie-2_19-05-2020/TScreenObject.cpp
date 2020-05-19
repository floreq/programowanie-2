#include "TScreenObject.h"

TScreenObject::TScreenObject(int x, int y)
{
	this->x = x;
	this->y = y;
}

TScreenObject::TScreenObject(const TScreenObject& other)
{
	x = other.x;
	y = other.y;
}

TScreenObject::~TScreenObject()
{
	// Nic nie robilismy dynamicznie, to nie musimy uzywac delete
}

void TScreenObject::PrzeunOWektor(int deltaX, int deltaY)
{
	x += deltaX;
	y += deltaY;
}
