#pragma once
#ifndef TRUCK_H_
#define TRUCK_H_

#include <iostream>
#include "Vehicle.h"

using namespace std;

class Truck : public Vehicle						//Class Truck inherited from Vehicle.
{
	int towCap;										//Int to store towing capacity.

public:

	Truck();										//Default constructor.

	Truck(string m, int y, int t);					//Parameterized constructor.

	int getTowCap();								//Getter to get towing capacity.
	void setTowCap(int t);							//Setter to set towing capacity.
	void displayInfo();								//Function to display Truck info.
};

#endif