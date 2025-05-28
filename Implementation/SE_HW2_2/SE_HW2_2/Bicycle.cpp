#include "Bicycle.h"

Bicycle::Bicycle(string biID, string biName) : bicycleID(biID), bicycleName(biName) { }

void Bicycle::getBicycleDetails(string &biID, string &biName) {
	biID = this->bicycleID;
	biName = this->bicycleName;
}