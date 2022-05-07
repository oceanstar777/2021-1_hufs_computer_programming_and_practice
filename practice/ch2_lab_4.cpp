#include<iostream>
using namespace std;

void space(void);
void asterisk(void);

int main(void)
{
	for (int i = 4 ; 0 < i; i--)
	{
		for (int j = 0 ;j < i; j++)
		{
			space();
		}
		asterisk();
	}
	for (int i = 2; i < 5; i++)
	{
		for (int j = 0; j < i; j++)
		{
			space();
		}
		asterisk();
	}
}

void space(void)
{
	cout << " ";
	return;
}

void asterisk(void)
{
	cout << "*" << endl;
	return;
}