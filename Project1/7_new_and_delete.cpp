#include<iostream>
using namespace std;

int main(void)
{
	int* pi = new int;		//하나의 int형 공간 할당
	int* pia = new int[100];	//크기가 100인 int형 동적 배열 할당
	double* pd = new double;	//하나의 double형 공간 할당
	double* pda = new double[100];	//크기가 100인 double형 동적 배열 할당

	delete pi;
	delete[] pia;
	delete[] pda;
	delete pd;

	return 0;

}