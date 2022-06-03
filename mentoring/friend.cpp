#include<iostream>
#include<string>

using namespace std;
class Company {
private:
	int sales, profit;
	friend void sub(Company &c);
	friend class Employee;		//friend 는 외부에 있는 private
								//요소도 접근 가능
public:
	Company() : sales(0), profit(0) {};
};

void sub(Company& c) {
	cout << c.profit << endl;
}
int main(void)
{
	Company c1;
	sub(c1);
	return 0;
}