#pragma once
#include <fstream>  //파일 입출력 위한 헤더
#include "AddBicycle.h"
#include <string>
using namespace std;

class AddBicycle;

class AddBicycleUI
{
private:
	AddBicycle* ab;
	ofstream& out_fp;
	ifstream& in_fp;
	string addedBicycleID;
	string addedBicycleName;
	string outBicycleID;
	string outBicycleName;
public:
	AddBicycleUI(AddBicycle* abControl, ifstream& in, ofstream& out);
	void registerNewBicycle();
	void getNewBicycle(string& biID, string& biName);
	
};

