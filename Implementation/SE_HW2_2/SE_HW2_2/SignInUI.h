#pragma once
#include "SignIn.h"
#include <string>
using namespace std;

class SignIn;

class SignInUI
{
private:
	SignIn* si;
	string signInID;
	string signInPW;
public:
	SignInUI(SignIn siControl);
	void requestSignIn();
	void getSignInInfo();
};

