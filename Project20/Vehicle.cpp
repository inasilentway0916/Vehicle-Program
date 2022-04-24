#include <iostream>
#include "Vehicle.h"

using namespace std;

Vehicle::Vehicle()									//Default constructor.
{
	manufacturer = "";								//Set manufacturer to empty string.
	yearBuilt = 0;									//Initialize to 0.
}

Vehicle::Vehicle(string m, int y)					//Parameterized Constructor.
{
	manufacturer = m;								//Set manufacturer to m.
	yearBuilt = y;									//Set year built to y.
}

string Vehicle::getMan()							//Getter to get manufacturer.
{
	return manufacturer;
}

int Vehicle::getYear()								//Getter to get year built.
{
	return yearBuilt;
}

void Vehicle::setMan(string m)						//Setter to set manufacturer.
{
	manufacturer = m;								//Set manufacturer to m.
}

void Vehicle::setYear(int y)						//Setter to set year built.
{
	yearBuilt = y;									//Set yearBuilt to y.
}

void Vehicle::displayInfo()							//Function to display information.
{
	cout << "Vehicle Information:" << endl;			//Display Vehicle Info.
	cout << "Manufacturer: " << getMan() << endl;
	cout << "Year Built: " << getYear() << endl;
}