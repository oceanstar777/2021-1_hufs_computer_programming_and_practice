#include<iostream>
using namespace std;

int main(void)
{
	const int STUDENTS = 5;
	int s[STUDENTS] = { 1,2,3,4,5 };

	for (int* p = s, *pend = s + STUDENTS; p != pend; p++)
	{
		cout << *p << " ";
	}
	return 0;
}