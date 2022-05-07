#include<iostream>
using namespace std;
#define SIZE 5
void copy(int* A, int* B, int n);



int main(void)
{
	int arr[SIZE] = { 1,2,3,4,5 };
	int c_arr[SIZE];
	copy(arr, c_arr, 5);
	for (int i = 0; i < SIZE; i++)
		cout << c_arr[i] << ' ';
	
	return 0;
}

void copy(int* A, int* B, int n)
{
	for (int i = 0; i < n; i++)
	{
		*(B + i) = *(A + i);
	}
	return;
}