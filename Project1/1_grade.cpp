#include<iostream>
using namespace std;

int main(void)
{
	const int STUDENTS = 10;
	int grade[STUDENTS];
	int sum = 0;
	int i;
	double average;

	for (i = 0; i < STUDENTS; i++)
	{
		cout << "학생들의 성적을 입력하세요 : ";
		cin >> grade[i];
	}

	for(i=0;i<STUDENTS;i++)
		sum += grade[i];

	average = (float)sum / (float)STUDENTS;

	cout << "학생들의 성적 평균 : " << average << endl;

	return 0;
}