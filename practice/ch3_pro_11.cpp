#include<iostream>
using namespace std;
void get_stat(double A[], double* p_avg, double* p_max, double* p_sum);
#define SIZE 6
int main(void)
{
	double arr[SIZE] = { 1.1, 2.3, 4.3, 2.3 , 4.2 ,3.2 };
	double avg;
	double max;
	double sum;
	get_stat(arr, &avg, &max, &sum);
	cout << "avg : " << avg<<endl;
	cout << "max : " << max<<endl;
	cout << "sum : " << sum<<endl;

	return 0;
}


void get_stat(double A[], double* p_avg, double* p_max, double* p_sum)
{
	*p_sum = 0;
	*p_max = A[0];
	for (int i = 0; i < SIZE; i++)
	{
		*p_sum += A[i];
		if (*p_max < A[i])
		{
			*p_max  = A[i];
		}

	}
	*p_avg = *p_sum / (double)SIZE;
}