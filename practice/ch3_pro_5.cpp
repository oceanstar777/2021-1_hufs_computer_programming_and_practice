#include<iostream>
using namespace std;
#define ROWS 3
#define COLS 5

int* sum_row(int arr[][COLS]);
int* sum_col(int arr[][COLS]);

int main(void)
{
	int matrix[ROWS][COLS] = {
		{12,56,32,16,98},
		{99,56,34,41,3},
		{65,3,87,78,21}
	};
	
	int *rsum = sum_row(matrix);
	int *csum = sum_col(matrix);
	cout << "행의 합" << endl;
	for (int i = 0; i < ROWS; i++)
	{
		cout <<i+1<<"행 : "<< * (rsum + i)<<endl;
	}
	cout << endl;
	cout << "열의 합" << endl;
	for (int i = 0; i < COLS; i++)
	{
		cout <<i+1<<"열 : "<< * (csum + i)<<endl;
	}

	return 0;
}

int* sum_row(int arr[][COLS])
{
	int sum;
	static int res[ROWS];
	for (int r = 0; r < ROWS ; r++)
	{
		sum = 0;
		for (int c = 0; c < COLS;  c++)
		{
			sum += arr[r][c];
		}
		res[r] = sum;
	}
	return res;
}

int* sum_col(int arr[][COLS])
{	
	int sum;
	static int res[COLS];
	for (int c = 0; c < COLS; c++)
	{
		sum = 0;
		for (int r = 0; r < ROWS; r++)
		{
			sum += arr[r][c];
		}
		res[c] = sum;
	}
	return res;
}