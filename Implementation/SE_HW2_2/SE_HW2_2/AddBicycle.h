#pragma once
#include "AddBicycleUI.h"

class AddBicycleUI;

class AddBicycle
{
private:
	AddBicycleUI* abUI;

public:
	AddBicycle(ifstream& in, ofstream& out);
	void inputGuestInfo();

};


