#include<iostream>
using namespace std;

int get_largest(int array[], int n);
int get_largest2(int* parray, int n);

int main(void)
{
	const int SIZE = 5;
	int arr[SIZE] = { 1,2,3,4,5 };
	int res1 = get_largest(arr, SIZE);
	int res2 = get_largest2(arr, SIZE);

	cout << res1 << endl;
	cout << res2 << endl;

	return 0;
}

int get_largest(int array[], int n)
{
	int max = array[0];
	for (int i = 1; i < n; i++)
	{
		if (max < array[i])
			max = array[i];
	}
	return max;
}

int get_largest2(int* parray, int n)
{
	int max = *parray;
	for (int i = 1; i < n; i++)
	{
		if (max < *(parray+i))
			max = *(parray+i);
	}
	return max;
}