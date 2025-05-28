#pragma once
#include "SignUp.h"
#include <iostream>
#include <string>
using namespace std;

class SignUp;

class SignUpUI
{
private:
	SignUp* su;
	string signupID;
	string signupPW;
	string signupMemberPhNo;
public:
	SignUpUI(SignUp* suControl);
	SignUp createNewMember();
	void getSignupInfo();
};

