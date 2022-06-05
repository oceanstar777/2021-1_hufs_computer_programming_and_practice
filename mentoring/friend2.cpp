#include<iostream>
#include<string>

using namespace std;

class Company {
	friend void sub(Company& c);
	friend class Employee;
	friend bool comparef(Company& c1, Company& c2);
private:
	int sales, profit;
public:
	Company(int profit = 0, int sales = 0)
	{
		this->profit = profit;
		this->sales = sales;
	}

	bool compare(Company& obj) {
		if (this->profit > obj.profit)
			return true;
		return false;
	}
};

bool comparef(Company& c1, Company& c2)
{
	if (c1.profit > c2.profit)
	{
		return true;
	}
	return false;
}

int main(void)
{
	Company c1(10), c2(20);
	if (c1.compare(c2))
		cout << "c1" << endl;
	if (comparef(c2, c1))
	{
		cout << "c2" << endl;
	}
}