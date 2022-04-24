//Name: Kevin Avila
//Date: 04/24/22
//Class: CIS 1202.501

#include <iostream>
#include <iomanip>
#include <string>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

using namespace std;

int main()
{

	string manufacturer;
	int yearBuilt;
	int n;												//Number of doors.
	int towCap;

	cout << "Vehicle Program" << endl;
	cout << "\nVehicle: " << endl;

	cout << "Enter the manufacturer: ";
	getline(cin, manufacturer);

	cout << "Enter the year built: ";
	cin >> yearBuilt;

	Vehicle vehicle(manufacturer, yearBuilt);			//Creates Vehicle class object.

	vehicle.displayInfo();								//Function call.

	cout << "\nCar: " << endl;

	cin.clear();										//Clear cin for next user input.
	cin.ignore(100, '\n');

	cout << "Enter the manufacturer: ";
	getline(cin, manufacturer);

	cout << "Enter the year built: ";
	cin >> yearBuilt;

	cout << "Enter the number of doors: ";
	cin >> n;

	Car car(manufacturer, yearBuilt, n);					//Create Car class object.

	car.displayInfo();										//Function call.

	cout << "\nTruck: " << endl;

	cin.clear();											//Clear cin for next user input.
	cin.ignore(100, '\n');

	cout << "Enter the manufacturer: ";
	getline(cin, manufacturer);

	cout << "Enter the year built: ";
	cin >> yearBuilt;

	cout << "Enter the towing capacity: ";
	cin >> towCap;

	Truck truck(manufacturer, yearBuilt, towCap);			//Create Truck class object.

	truck.displayInfo();

	system("pause");
	return 0;
}