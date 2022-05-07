#include<iostream>
#include<string>
using namespace std;

class BankAccount {
private:
	int accout_number;
	string owner;
	int balance;
	
public:
	void set_balance(int amount);
	int get_balance();
	void deposit(int amount);
	void withdraw(int amount);
	void print();
	void set_name(string name);
};

void BankAccount::set_name(string name)
{
	owner = name;
}
void BankAccount::set_balance(int amount)
{
	balance = amount;
}

int BankAccount::get_balance()
{
	return balance;
}

void BankAccount::deposit(int amount)
{
	balance += amount;
}

void BankAccount::withdraw(int amount)
{
	balance -= amount;
}

void BankAccount::print()
{
	cout << "==============" << endl;
	cout << "소유주 : " << owner << endl;
	cout << "현재 잔고 : " << balance << endl;
	cout << "==============" << endl;
}


int main(void)
{
	
	BankAccount* account = new BankAccount;
	account->set_name("Kim");
	account->set_balance(0);
	account->deposit(10000);
	account->print();
	account->withdraw(1000);
	account->print();

	delete account;

	return 0;
}