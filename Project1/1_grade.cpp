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
		cout << "�л����� ������ �Է��ϼ��� : ";
		cin >> grade[i];
	}

	for(i=0;i<STUDENTS;i++)
		sum += grade[i];

	average = (float)sum / (float)STUDENTS;

	cout << "�л����� ���� ��� : " << average << endl;

	return 0;
}