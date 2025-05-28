#pragma once
#include "AddBicycleUI.h"
#include "BicycleList.h"
#include "Bicycle.h"

class AddBicycleUI;

class AddBicycle
{
private:
	AddBicycleUI* abUI;
	string newBicycleID;
	string newBicycleName;
	BicycleList* pBicycleList;
	Bicycle* pBicycle;
	
public:
	AddBicycle(ifstream& in, ofstream& out);
	void inputNewBicycle(string& biID, string& biPW);

};


