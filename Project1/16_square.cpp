#include<iostream>
using namespace std;

int square(int x);

int main(void)
{
	int x;
	cout << "제곱할 정수를 입력하세요 : ";
	cin >> x;
	cout << "제곱한 정수의 값 : " << square(x) << endl;

	return 0;
}

int square(int x)
{
	return (x * x);
}