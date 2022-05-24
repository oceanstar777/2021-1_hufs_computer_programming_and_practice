#include<iostream>
#include<string>

using namespace std;

int main(void)
{
	int* p = new int;	//일반 변수의 경우
	int *a = new int[10];	//배열의 경우

	delete p;
	delete[] a;		//배열 삭제의 경우 대괄호 적기

	return 0;
}