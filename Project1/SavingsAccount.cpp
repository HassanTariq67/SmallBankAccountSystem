#include "SavingsAccount.h"



void SavingsAccount::setRate(double interestRate)
{
	this->interestRate = interestRate;
}

double SavingsAccount::getRate()
{
	return this->interestRate;
}

double SavingsAccount::calculateInterest()
{
	return (SavingsAccount::getRate()*SavingsAccount::getBalance());
}

SavingsAccount::SavingsAccount(int balance, double interesrRate) : Account::Account(balance)
{
	SavingsAccount::setRate(interesrRate);
}

SavingsAccount::SavingsAccount()
{
	interestRate = 0.0;
}
