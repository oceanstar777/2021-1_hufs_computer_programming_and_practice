#include<iostream>
#include<string>
using namespace std;

void swap(int* a, int* b);

int main(void)
{
	int* p = NULL;
	//double a = 1;	�����ϴ� ũ�Ⱑ �޶� ����
	int a = 1;
	p = &a;
	cout << *p << endl;
	
	int arr[3] = { 1,2,3 };
	for (int i = 0; i < 3; i++)
	{
		cout << *(arr+i) << endl;
	}
	return 0;
}
