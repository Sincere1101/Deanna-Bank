#include <string>
using namespace std;

class BankAccount

{
private:
	string Name;
	double Balance;
public:
	//Constructures

	 BankAccount(string);
	 BankAccount(string, double);
	 void Withdraw(double);
	 void Deposit(double);
	 void setBalance(double);
	 string getName();
	 double getBalance();





};

