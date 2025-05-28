#pragma once
#include "AddBicycleUI.h"


AddBicycleUI::AddBicycleUI(AddBicycle* abControl, ifstream& in, ofstream& out)
	: ab(abControl), in_fp(in), out_fp(out) {
}
void AddBicycleUI::registerNewBicycle() {
	in_fp >> addedBicycleID >> addedBicycleName;
	ab->inputNewBicycle(outBicycleID, outBicycleName);
	//cout << "3.1. 자전거 등록" << endl;
	//cout << "> " << outBicycleID << " " << outBicycleName << endl << endl ;
	out_fp << "3.1. 자전거 등록" << endl;
	out_fp << "> " << outBicycleID << " " << outBicycleName << endl << endl;
}
void AddBicycleUI::getNewBicycle(string& biID, string& biName) {
	biID = addedBicycleID;
	biName = addedBicycleName;
}