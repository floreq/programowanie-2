#pragma once
#include "Vehicle.h"

class VehicleCollection
{
protected:
	int nextEmptyIndex;
	int size;
	Vehicle** array;
public:
	VehicleCollection(int size);
	~VehicleCollection();

	virtual void AddVehicle(Vehicle* vehicleToAdd);
	virtual void DisplaySingleVehicle(int i);
	virtual void DisplayAllVehicles();
};

