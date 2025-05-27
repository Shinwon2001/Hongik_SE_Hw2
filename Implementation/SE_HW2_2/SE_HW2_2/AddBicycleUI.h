#pragma once
#include <fstream>  //파일 입출력 위한 헤더
using namespace std;
#include "AddBicycle.h"

// 상수 선언
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"


class AddBicycle;

class AddBicycleUI
{
private:
	AddBicycle* ab;
	ofstream& out_fp;
	ifstream& in_fp;
	string addBicycleID;
	string addBicyclePW;
public:
	AddBicycleUI(AddBicycle* abControl, ifstream& in, ofstream& out);
	void getSignUpInfo();

};

