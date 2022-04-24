#include <iostream>
#include "Vehicle.h"
#include "Truck.h"

using namespace std;

Truck::Truck() : Vehicle()											//Default constructor.
{
	towCap = 0;													//Initialize to 0.
}

Truck::Truck(string m, int y, int t) : Vehicle(m, y)				//Parameterized constructor
{
	towCap = t;
}

int Truck::getTowCap()												//Getter to get towing capacity.
{
	return towCap;
}

void Truck::setTowCap(int t)										//Setter to set towing capacity.
{
	towCap = t;
}

void Truck::displayInfo()											//Function to display Truck info.
{
	Vehicle::displayInfo();											//Call Vehicle class displayInfo().

	cout << "Towing Capacity: " << getTowCap() << endl;				//Display towing capacity.
}