#include<iostream>
#include<ctime>
#include<cstdlib>
#define SIZE 10
using namespace std;

int find_max(int arr[]);
void print_arr(int arr[]);

int main(void)
{
	int max;
	int frequency[SIZE] = { 0 };
	srand((unsigned int)time(NULL));
	
	for (int i = 0; i < SIZE; i++)
	{
		++frequency[rand() % 10];
	}
	print_arr(frequency);
	
	max = find_max(frequency);
	
	cout << endl<< "가장 많이 나온 값 : " << max << endl;

	return 0;
}

int find_max(int arr[])
{
	int max_idx = 0;
	for (int i = 1; i < SIZE; i++)
	{
		if (arr[max_idx] < arr[i])
		{
			max_idx = i;
		}
	}
	return max_idx + 1;	
}

void print_arr(int arr[])
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << i + 1 << " : " << arr[i] << "회" << endl;
	}
	return;
}