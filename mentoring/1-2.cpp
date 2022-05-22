#include<iostream>

using namespace std;

int main(void)
{
	int test[10];
	for (int i = 0; i < 10; i++)
	{
		test[i] = 0;
	}
	return 0;

	int a = 1;

	int* p;
	p++;
	printf("%d", p);
	p= p + 2;
	printf("%d",p)
}