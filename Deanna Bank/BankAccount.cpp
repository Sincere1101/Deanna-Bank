#include "BankAccount.h"

BankAccount::BankAccount(string Name)
{
	this->Name = Name;
	this->Balance = 0;
}
BankAccount::BankAccount(string Name, double Balance)
{
	this->Balance = Balance;
	this->Name = Name;
};

void BankAccount::Withdraw(double amount)
	{
	this->Balance = this->Balance - amount;
	}


void BankAccount::Deposit(double amount)
{
	this->Balance = this->Balance + amount;
}

void BankAccount::setBalance(double balance)
{
	this->Balance = balance;
}

string BankAccount::getName()
{
	return Name;
}

double BankAccount::getBalance()
{
	return Balance;
}
