#include<iostream>
using namespace std;

inline double square(double n)
{
	return (n * n);
}

int main(void)
{
	cout << "2.0�� ������ " << square(2.0) << endl;
	cout << "3.0�� ������ " << square(3.0) << endl;

	return 0;
}