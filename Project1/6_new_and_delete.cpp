#include<iostream>
using namespace std;

int main(void)
{
	int* pi;
	pi = new int[100];

	for (int i = 0; i < 100; i++)
	{
		*(pi + i) = 0;
	}
	for (int i = 0; i < 100; i++)
	{
		cout<<*(pi+i)<<endl;
	}
	delete[] pi;

	return 0;
}