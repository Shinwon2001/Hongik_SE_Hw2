#pragma once
class SignUpUI
{
private:
	SignUp su;
	String signupID;
	String signupPW;
	String signupMemberPhNo;
public:
	SignUpUI(SignUp suControl);
	SignUp createNewMember();
	getSignupInfo();
};

