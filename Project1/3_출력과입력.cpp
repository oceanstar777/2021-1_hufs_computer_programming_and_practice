#include<iostream>
#include<string>
using namespace std;

int main(void)
{
	cout << 100;
	cout << endl;
	int i = 100;
	cout << i;
	cout << endl;
	cout << "변수 i 의 값은 ";
	cout << i;
	cout << "입니다";
	cout << endl;

	string name;
	cout << "이름을 입력하시오 : ";
	cin >> name;		//문자열이 name으로 입력된다
	cout << name << "을 환영합니다." << endl;

	return 0;
}