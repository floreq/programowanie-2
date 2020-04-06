#include "VehicleCollection.h"
#include <iostream>

using namespace std;

VehicleCollection::VehicleCollection(int size)
{
	this->nextEmptyIndex = 0;
	this->size = size;
	array = new Vehicle*[size];
}

VehicleCollection::~VehicleCollection()
{
	delete[] array;
	nextEmptyIndex = 0;
}

void VehicleCollection::DisplaySingleVehicle(int i)
{
	if (i < nextEmptyIndex) {
		array[i]->Display();
	}
	else {
		throw "Nothing to display";
	}
}

void VehicleCollection::DisplayAllVehicles()
{
	for (int i = 0; i < nextEmptyIndex; i++)
	{
		array[i]->Display();
	}
}

void VehicleCollection::AddVehicle(Vehicle* vehicleToAdd)
{
	array[nextEmptyIndex] = vehicleToAdd;
	nextEmptyIndex++;
}
