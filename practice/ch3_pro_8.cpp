#include<iostream>
using namespace std;
#define STUDENT 5
#define TEST 3
int* get_min_scores(int arr[][TEST]);
int* get_max_scores(int arr[][TEST]);
double* get_average(int arr[][TEST]);

int* get_student_max(int arr[][TEST]);
int* get_student_min(int arr[][TEST]);
double* get_student_avg(int arr[][TEST]);
int main(void)
{
	int arr[STUDENT][TEST] = {
		{30,10,11},
		{40,90,32},
		{70,65,56},
		{70,43,32},
		{80,10,89}
	};
	int* pmin = get_min_scores(arr);
	int* pmax = get_max_scores(arr);
	double* paverage = get_average(arr);
	int* psmin = get_student_min(arr);
	int* psmax = get_student_max(arr);
	double* psaverage = get_student_avg(arr);

	for (int i = 0; i < TEST; i++)
		cout << "시험 " << i + 1 << "의 최고점수 : "<<*(pmax+i)<<endl;
	cout << endl << endl;

	for (int i = 0; i < TEST; i++)
		cout << "시험 " << i + 1 << "의 최저 점수 : "<<*(pmin+i)<<endl;
	cout << endl << endl;
	
	for (int i = 0; i < TEST; i++)
		cout << "시험 " << i + 1 << "의 평균 : " << *(paverage + i) << endl;
	cout << endl << endl;

	for (int i = 0; i < STUDENT; i++)
		cout << "학생 " << i + 1 << "의 최고점수 :" << *(psmax + i) << endl;
	cout << endl << endl;
	for (int i = 0; i < STUDENT; i++)
		cout << "학생 " << i + 1 << "의 최저점수 : " << *(psmin + i) << endl;
	cout << endl << endl;
	for (int i = 0; i < STUDENT ; i++)
		cout << "학생 " << i + 1 << "의 평균 : " << *(psaverage + i) << endl;

	
	return 0;
}

int* get_min_scores(int arr[][TEST])
{
	static int a[TEST] = { 0 };
	int min;
	for (int c = 0; c < TEST; c++)
	{
		min = arr[c][0];
		for (int r = 1; r < STUDENT; r++)
		{
			if (min > arr[r][c])
				min = arr[r][c];
		}
		a[c] = min;
	}
	return a;
}

int* get_max_scores(int arr[][TEST])
{
	static int a[TEST] = { 0 };
	int max;
	for (int c = 0; c < TEST; c++)
	{
		max = arr[c][0];
		for (int r = 1; r < STUDENT; r++)
		{
			if (max < arr[r][c])
				max = arr[r][c];
		}
		a[c] = max;
	}
	return a;
}

double* get_average(int arr[][TEST])
{
	static double a[TEST];
	int sum;
	double avg;
	for (int c = 0; c < TEST;c++)
	{
		sum = 0;
		for (int r = 1; r < STUDENT; r++)
			sum += arr[r][c];
		avg = (double)sum / (double)STUDENT;
		a[c] = avg;
	}
	return a;
}

int* get_student_max(int arr[][TEST])
{
	static int a[STUDENT];
	int max;
	for (int r = 0; r < STUDENT; r++)
	{
		max = arr[r][0];
		for (int c = 1; c < TEST; c++)
		{
			if (max < arr[r][c])
				max = arr[r][c];
		}
		a[r] = max;
	}
	return a;
}

int* get_student_min(int arr[][TEST])
{
	static int a[STUDENT];
	int min;
	for (int r = 0; r < STUDENT; r++)
	{
		min = arr[r][0];
		for (int c = 1; c < TEST; c++)
		{
			if (min > arr[r][c])
				min = arr[r][c];
		}
		a[r] = min;
	}
	return a;
}

double* get_student_avg(int arr[][TEST])
{
	static double a[STUDENT];
	int sum;
	double avg;

	for (int r = 0; r < STUDENT; r++)
	{
		sum = 0;
		for (int c = 0; c < TEST; c++)
			sum += arr[r][c];
		avg= (double)sum / (double)TEST;
		a[r] = avg;
	}
	return a;
}