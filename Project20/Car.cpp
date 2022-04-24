#include <iostream>
#include "Vehicle.h"
#include "Car.h"

using namespace std;

Car::Car() : Vehicle()										//Default constructor.
{
	numDoors = 0;											//Initialize to 0.
}

Car::Car(string m, int y, int n) : Vehicle(m, y)			//Parameterized constructor.
{
	numDoors = n;
}


int Car::getDoors()											//Getter to get number of doors.
{
	return numDoors;
}

void Car::setDoors(int n)									//Setter to set number of doors
{
	numDoors = n;
}

void Car::displayInfo()										//Function to display car info
{
	Vehicle::displayInfo();									//Call Vehicle class displayInfo()

	cout << "Doors: " << getDoors() << endl;				//Output number of doors.
}