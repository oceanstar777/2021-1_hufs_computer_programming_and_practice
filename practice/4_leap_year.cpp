#include<iostream>

using namespace std;

int main(void)
{
	int year;
	bool res;

	cout << "연도를 입력하세요 : ";
	cin >> year;

	res = ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0));

	cout.setf(cout.boolalpha);
	cout << "윤년여부 : " << res << endl;

	return 0;
}