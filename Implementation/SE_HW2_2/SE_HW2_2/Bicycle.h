#pragma once
#include <iostream>
#include <string>
using namespace std;

class Bicycle
{
private:
	string bicycleID;
	string bicycleName;
public:
	Bicycle(string biID, string biName);
	void getBicycleDetails(string &biID, string &biName);
};

