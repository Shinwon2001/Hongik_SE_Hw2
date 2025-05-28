#pragma once
#include "RentalBicycleList.h"

class RentalBicycleList;

class RentalBicycleListUI
{
private:
	RentalBicycleList* rbl;
public:
	RentalBicycleListUI(RentalBicycleList rblControl);
	void requestRentalBicycleList();
	void getRentalBicycleList();
};

