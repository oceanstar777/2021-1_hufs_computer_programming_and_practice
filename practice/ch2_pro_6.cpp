#include<iostream>
using namespace std;

void get_tax(int salary);

int main(void)
{
	int salary;
	cout << "월급을 입력하세요 : ";
	cin >> salary;
	
	cout << "소득세는 ";
	get_tax(salary);
	cout<<"만원 입니다." << endl;

	return 0;
}

void get_tax(int salary)
{
	if (salary <= 1000)
		cout << salary * 0.08;
	else if (salary <= 4000)
		cout << salary * 0.17;
	else if (salary <= 8000)
		cout << salary * 0.26;
	else
		cout << salary * 0.35;
	
	return;
}