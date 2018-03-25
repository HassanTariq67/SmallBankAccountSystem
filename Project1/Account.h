#pragma once
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

class Account
{
private:
	string name;
	double balance;
public:
	Account(string name);
	Account(double balance);
	Account(string name, double balance);
	Account();
	void setName(string name);
	string getName();
	void setBalance(double balance);
	double getBalance();
	bool validateBalance(double balance);  
	void credit(double balance); 
	bool debit(double balance); 
};

