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
		cout << "x���͸� �Է��ϼ��� : ";
		cin >> x[i];
	}
	for (int i = 0 ;i < size; i++)
	{
		cout << "y���͸� �Է��ϼ��� : ";
		cin >> y[i];
	}

	int* p = vector_add(x, y);

	cout << "�� ������ �� : ";
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