#include<iostream>
using namespace std;

int main(void)
{
	const double PI = 3.141592;
	double radius,A,V;
	cout << "���� �������� �Է��ϼ��� : ";
	cin >> radius;
	A = 4 * PI * radius * radius;
	V = (4.0 / 3.0) * PI * radius * radius * radius;

	cout << "���� ǥ���� : " << A << endl;
	cout << "���� ���� : " << V << endl;

	return 0;
}