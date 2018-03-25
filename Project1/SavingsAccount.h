#pragma once
#include "Account.h"
class SavingsAccount :
	public Account
{
private:
	double interestRate;
public:
	void setRate(double);
	double getRate();
	double calculateInterest();
	SavingsAccount(int balance, double interesrRate);
	SavingsAccount();
};

