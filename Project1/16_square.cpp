#include<iostream>
using namespace std;

int square(int x);

int main(void)
{
	int x;
	cout << "������ ������ �Է��ϼ��� : ";
	cin >> x;
	cout << "������ ������ �� : " << square(x) << endl;

	return 0;
}

int square(int x)
{
	return (x * x);
}