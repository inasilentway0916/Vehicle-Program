#pragma once
#ifndef CAR_H_
#define CAR_H_

#include <iostream>
#include "Vehicle.h"

using namespace std;


class Car : public Vehicle					//Car class inherited from Vehicle.
{

	int numDoors;							//Int to store number of doors.

public:

	Car();									//Default constructor

	Car(string m, int y, int n);			//Parameterized constructor

	int getDoors();							//Getter to take number of doors
	void setDoors(int n);					//Setter to set number of doors
	void displayInfo();						//Function to display Car info
};

#endif