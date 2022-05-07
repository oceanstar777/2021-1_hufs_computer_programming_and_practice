#include<iostream>

using namespace std;

int main(void)
{
	int age;	//나이
	cout << "나이를 입력하세요 : ";
	cin >> age;
	if (age <= 12)
		cout << "어린이 입니다." << endl;
	else if (age <= 19)
		cout << "청소년 입니다." << endl;
	else
		cout << "성인입니다." << endl;

	return 0;
}