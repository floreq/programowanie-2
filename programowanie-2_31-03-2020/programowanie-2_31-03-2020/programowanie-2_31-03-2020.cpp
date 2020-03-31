#include <iostream>
#include <windows.h>
#include "VehicleCollection.h"
#include "Car.h";
#include "Bike.h";

using namespace std;

int main()
{
	VehicleCollection collection(10);
	collection.AddVehicle(new Car(1, 1, 120, 4, "red"));
	collection.AddVehicle(new Bike(1, 8, 20, 1, "blue", 20));
	collection.DisplaySingleVehicle(0);
	collection.DisplaySingleVehicle(1);

	VehicleCollection collection1(5);
	collection1.AddVehicle(new Car(1, 16, 120, 4, "red"));
	collection1.AddVehicle(new Bike(1, 24, 20, 1, "blue", 20));
	collection1.AddVehicle(new Car(1, 32, 120, 4, "red"));
	collection1.AddVehicle(new Bike(1, 40, 20, 1, "blue", 20));
	collection1.DisplayAllVehicles();

	system("pause");
}
