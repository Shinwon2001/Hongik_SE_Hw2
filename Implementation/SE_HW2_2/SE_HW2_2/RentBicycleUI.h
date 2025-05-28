#pragma once
#include "RentBicycle.h"


class RentBicycle;

class RentBicycleUI
{
private:
	RentBicycle* rb;
public:
	RentBicycleUI(RentBicycle* rbControl);
	void rentBicycle();
	void getBicycleInfo();
};

