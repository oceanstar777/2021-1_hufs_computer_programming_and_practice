#include<iostream>

using namespace std;

int main(void)
{
	int year;
	bool res;

	cout << "������ �Է��ϼ��� : ";
	cin >> year;

	res = ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0));

	cout.setf(cout.boolalpha);
	cout << "���⿩�� : " << res << endl;

	return 0;
}