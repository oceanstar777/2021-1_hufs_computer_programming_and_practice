#include<iostream>
using namespace std;

void get_tax(int salary);

int main(void)
{
	int salary;
	cout << "������ �Է��ϼ��� : ";
	cin >> salary;
	
	cout << "�ҵ漼�� ";
	get_tax(salary);
	cout<<"���� �Դϴ�." << endl;

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