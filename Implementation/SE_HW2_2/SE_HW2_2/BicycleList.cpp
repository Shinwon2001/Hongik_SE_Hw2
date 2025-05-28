#include "BicycleList.h"

Bicycle* BicycleList::addNewBicycle(string biID, string biName) {
	Bicycle* newBi = new Bicycle(biID, biName);
	
	bicycles.push_back(newBi);
	
	return newBi;
}