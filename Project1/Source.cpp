#include "CheckingAccount.h"
#include "SavingsAccount.h"


int main()
{
	SavingsAccount sav(500, 1.0);
	CheckingAccount chc(1000, 2);

	cout << "Savings account initial balance:" << sav.getBalance() << endl;
	cout << "Credit 100 rupees." << endl;
	sav.credit(100);
	cout << "Savings Account balance after 100 rupees credit:" << sav.getBalance() << endl;
	cout << "Debit 100 rupees." << endl;
	sav.debit(60);
	cout << "Savings Account balance after 100 rupees debit:" << sav.getBalance() << endl;

	cout << endl << endl;

	cout << "Checking Account initial balance:" << chc.getBalance() << endl;
	cout << "Credit 100 rupees." << endl;
	chc.credit(100);
	cout << "Checking Account balance after 100 rupees credit:" << chc.getBalance() << endl;
	cout << "Debit 100 rupees." << endl;
	chc.debit(70);
	cout << "Checking Account balance after 100 rupees debit:" << chc.getBalance() << endl;

	_getche();
	return 0;
}