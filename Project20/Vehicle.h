#pragma once
#ifndef VEHICLE_H_
#define VEHICLE_H_

#include <iostream>

using namespace std;

class Vehicle								//Create Vehicle class.
{
	string manufacturer;
	int yearBuilt;

public:

	Vehicle();								//Default constructor
	Vehicle(string m, int y);				//Parameterized constructor

	string getMan();						//Getter to get manufacturer
	
	int getYear();							//Getter to get year built						
	void setMan(string m);					//Setter to set manufacturer
	void setYear(int y);					//Setter to set year built
	void displayInfo();						//Funtion to display Vehicle info.
};

#endif