#pragma once
#include <iostream>
#include <fstream> 
#include "AddBicycleUI.h"
#include "AddBicycle.h"

// 상수 선언
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

AddBicycleUI::AddBicycleUI(AddBicycle* abControl, ifstream& in, ofstream& out)
	: ab(abControl), in_fp(in), out_fp(out) {
}
void AddBicycleUI::getSignUpInfo() {
	//out_fp << "1.1. 회원가입" << endl;
	//out_fp << addBicycleID << addBicyclePW << endl;
	in_fp >> addBicycleID >> addBicyclePW;
	cout << "3.1. 자전거 등록" << endl;
	cout << addBicycleID << " " << addBicyclePW << endl;
}