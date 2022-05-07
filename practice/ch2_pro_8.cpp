#include<iostream>
using namespace std;

void prime(int n);

int main(void)
{
	for (int i = 2; i <= 100; i++)
	{
		prime(i);
	}

	return 0;
}

void prime(int n)
{
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			return;
		}
	}
	cout << n << " ";
	return;
}
