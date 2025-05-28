#pragma once
#include "SignOut.h"

class SignOut;

class SignOutUI
{
private:
	SignOut* so;
public:
	SignOutUI(SignOut* soControl);
	void requestSignOut();
	void getSignOut();
};

