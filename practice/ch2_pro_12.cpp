#include<iostream>
using namespace std;

int rec_func(int n);

int main(void)
{
	int n;
	cout << "세제곱의 합을 할 수 입력 : ";
	cin >> n;
	cout << rec_func(n) << endl;

	return 0;
}

int rec_func(int n)
{
	if (n == 1)
		return 1;
	return rec_func(n - 1) + n * n * n;
}
