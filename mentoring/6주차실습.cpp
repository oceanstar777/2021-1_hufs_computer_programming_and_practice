#include<iostream>
using namespace std;

#define SIZE 30
int main(void)
{
	int arr[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = i + 1;
		cout << arr[i]<< ' ';
	}
	
	return 0;
}