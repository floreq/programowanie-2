#include <iostream>
#include <windows.h>
#include "VehicleCollection.h"
#include "Car.h";
#include "Bike.h";
#include "Boat.h";
#include "Amphibia.h"
#include "WaterBike.h"

using namespace std;

int main()
{
	//VehicleCollection collection(10);
	//collection.AddVehicle(new Car(1, 1, 120, 4, "red"));
	//collection.AddVehicle(new Bike(1, 8, 20, 1, "blue", 20));
	//collection.DisplaySingleVehicle(0);
	//collection.DisplaySingleVehicle(1);

	//VehicleCollection collection1(5);
	//collection1.AddVehicle(new Car(1, 16, 120, 4, "red"));
	//collection1.AddVehicle(new Bike(1, 24, 20, 1, "blue", 20));
	//collection1.AddVehicle(new Car(1, 32, 120, 4, "red"));
	//collection1.AddVehicle(new Bike(1, 40, 20, 1, "blue", 20));
	//collection1.DisplayAllVehicles();

	//VehicleCollection collection2(5);
	//collection2.AddVehicle(new Boat(20, 10, 11, 5));
	//collection2.DisplayAllVehicles();

	//Amphibia a1(30, 10, 11, 3, 120, 4, "blue");
	//a1.Display();

	Vehicle* wsv;
	//Car* wsc;
	//Boat* wsb;
	//wsv = &a1; // Juz tak nie dziala
	//wsc = &a1;
	//wsc->MoveBy(1, 0); // Uruchomi sie metoda z Car, poniewaz jest tam nadpisana. Gdy napisalo sie w Amphibia ta metode to ona zostaje uruchomiona z klasy Amphibia
	//wsc->Display(); // Juz nie trzeba Car::Display...
	//wsb = &a1;
	//wsb->MoveBy(1, 0); // Uruchomi sie metoda z Vehicle
	//wsc->Display();

	WaterBike w1(1, 24, 20, 1, "blue", 20, 30);
	w1.SetX(2);
	w1.GetX();
	w1.MoveBy(1, 1);
	w1.MoveTo(1, 1);
	w1.GetMaxSpeedOnTheLand();
	w1.GetNumberOfSeats();
	w1.Display();
	
	//wsv = &w1;


	system("pause");
}
