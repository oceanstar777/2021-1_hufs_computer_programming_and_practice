#include<iostream>
#include<string>
using namespace std;

int main(void)
{
	int a = 1;

	int& b = a;		//참조자, 반드시 선언과 동시에 초기화 필요
			//포인터는 변경가능, 참조자는 선언과 동시에 계속 사용 해야함


	b = 2;
	cout << a << " " << b << endl;
	int* p = &a;
	cout << *p << endl;


	return 0;
}