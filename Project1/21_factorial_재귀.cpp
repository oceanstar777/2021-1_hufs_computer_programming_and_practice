#include<iostream>

using namespace std;

long factorial(int n);

int main(void)
{
	int x;
	long f;
	cout << "정수를 입력하세요 :";
	cin >> x;
	f = factorial(x);
	cout << x << "!" << "은" << f << "입니다" << endl;

	return 0;
}

long factorial(int n)
{
	cout << "factorial(" << n << ")" << endl;
	if (n < 2){
		return 1;
	}
	else
	{
		return n*factorial(n - 1);
	}
}