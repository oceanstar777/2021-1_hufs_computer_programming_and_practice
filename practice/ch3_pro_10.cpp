#include<iostream>
using namespace std;
#define SIZE 5

int* search(int* A, int n, int x);

int main(void)
{
	int arr[5] = { 3,4,5,6,7 };
	
	int* ans = search(arr, SIZE, 3);
	cout << *(ans) << endl;
	return 0;
}

int* search(int* A, int n, int x)
{
	int start = 0, end = n;
	int mid;
	for (int i = 0; i < n; i++)
	{
		mid = (start + end) / 2;

		if (*(A + mid) == x)
			return A + mid;
		if (*(A + mid) < x)
		{
			start = mid + 1;
		}
		else
		{
			end = mid - 1;
		}
	}
	return NULL;
}