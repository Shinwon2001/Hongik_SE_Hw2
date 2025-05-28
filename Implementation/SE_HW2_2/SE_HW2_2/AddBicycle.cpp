#pragma once
#include "AddBicycle.h"


AddBicycle::AddBicycle(ifstream& in, ofstream& out) {
	abUI = new AddBicycleUI(this, in, out);
	abUI->registerNewBicycle();

}

void AddBicycle::inputNewBicycle(string& biID, string& biName) {
	abUI->getNewBicycle(newBicycleID, newBicycleName);
	pBicycleList = new BicycleList();
	pBicycle = pBicycleList->addNewBicycle(newBicycleID, newBicycleName);
	pBicycle->getBicycleDetails(biID, biName);
}