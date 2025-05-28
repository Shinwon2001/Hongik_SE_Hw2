#pragma once
#include <vector>
#include "Bicycle.h"

class BicycleList
{
private:
	vector<Bicycle*> bicycles;
public:
	Bicycle* addNewBicycle(string biID, string biName);
	Bicycle* findBicycle();
};

