#pragma once
#include "AddBicycle.h"
#include "AddBicycleUI.h"

AddBicycle::AddBicycle(ifstream& in, ofstream& out) {
	abUI = new AddBicycleUI(this, in, out);

}

void AddBicycle::inputGuestInfo() {
	abUI->getSignUpInfo();
}