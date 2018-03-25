#include "Account.h"

Account::Account(string name)
{
	this->name = name;
}

Account::Account(double balance)
{
	if (validateBalance(balance) == true)
		setBalance(balance);
	else
	{
		cout << "Invalid balance entered! Balance initialized to zero." << endl;
		setBalance(balance);
	}
}

Account::Account(string name, double balance)
{
	this->setName(name);
	Account::Account(balance);
}

Account::Account()
{
	name = "";
	balance = 0.0;
}

void Account::setName(string name)
{
	this->name = name;
}


string Account::getName()
{
	return string(this->name);
}

void Account::setBalance(double balance)
{
	this->balance = balance;
}

double Account::getBalance()
{
	return this->balance;
}

bool Account::validateBalance(double balance)
{
	if (balance >= 0.0)
		return true;
	else
		return false;
}

void Account::credit(double balance)
{
	if (balance >= 0)
		setBalance(getBalance() + balance);
	else
		cout << "Invalid amounnt." << endl;
}

bool Account::debit(double balance)
{
	if (balance >= 0)
	{
		if (getBalance() >= balance)
		{
			setBalance(getBalance() - balance);
			return true;
		}
		else
		{
			cout << "Insufficient balance in your account." << endl;
			return false;
		}
	}
	else
	{
		cout << "Cannot manipulate a negative balance amount." << endl;
		return false;
	}
}