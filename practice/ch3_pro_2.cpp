#include<iostream>
using namespace std;

#define size 3

int* vector_add(int x[],int y[]);

int main(void)
{
	int x[size];
	int y[size];

	for (int i = 0; i < size; i++)
	{
		cout << "x벡터를 입력하세요 : ";
		cin >> x[i];
	}
	for (int i = 0 ;i < size; i++)
	{
		cout << "y벡터를 입력하세요 : ";
		cin >> y[i];
	}

	int* p = vector_add(x, y);

	cout << "두 벡터의 합 : ";
	for (int i = 0; i < size; i++)
	{
		cout << *(p + i)<<' ';
	}
	
	return 0;
}

int* vector_add(int x[], int y[])
{
	static int s[size];
	
	for (int i = 0; i < size; i++)
	{
		s[i] = *(x + i) + *(y + i);
	}
	
	return s;
}