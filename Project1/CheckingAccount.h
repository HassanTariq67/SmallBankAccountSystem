#pragma once
#include "Account.h"
class CheckingAccount :
	public Account
{
private:
	double feeCharged;
public:
	void credit(double);
	void debit(double);
	void setFee(double);
	double getFee();
	CheckingAccount(double balance,double feeCharged);
	CheckingAccount();
};

