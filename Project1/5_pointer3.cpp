//배열을 함수로 전달하는 경우
#include<iostream>
using namespace std;

int get_average(int score[],int n);
void increment(int score[],int n);


int main(void)
{
	
	int s[] = { 1,2,3,4,5 };
	const int STUDENTS = sizeof(s) / sizeof(s[0]);
	for (int*p = s,*pend = s+STUDENTS;p!=pend; p++)
	{
		cout << *p << " ";
	}
	cout << endl;
	
	cout << get_average(s,STUDENTS) << endl;
	increment(s,STUDENTS);
	for (int* p = s, *pend = s + STUDENTS; p != pend; p++)
	{
		cout << *p << " ";
	}
	cout << endl;
	cout << get_average(s,STUDENTS) << endl;
	
	return 0;
}

int get_average(int score[],int n)
{
	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		sum += score[i];
	}
	return sum / n;
}

void increment(int score[],int n)
{
	for (int i = 0; i < n; i++)
		++score[i];
	return;
}