#include "CheckingAccount.h"



void CheckingAccount::credit(double balance)
{
	Account::credit(balance-getFee());
}

void CheckingAccount::debit(double balance)
{
	if (balance + getFee() < CheckingAccount::getBalance())
	{
		if (Account::debit(balance))
			Account::debit(getFee());
	}
	else
	{
		cout << "Invalid balance in account. DebitAmount+Fee exceed the current balance." << endl;
	}
}

void CheckingAccount::setFee(double feeCharged)
{
	this->feeCharged = feeCharged;
}

double CheckingAccount::getFee()
{
	return this->feeCharged;
}

CheckingAccount::CheckingAccount(double balance, double feeCharged) : Account::Account(balance)
{
	CheckingAccount::setFee(feeCharged);
}

CheckingAccount::CheckingAccount()
{
	feeCharged = 0.0;
}