#include<iostream>
#include<cmath>
using namespace std;

void quad_eqn(double a, double b, double c);

int main(void)
{
	double a, b, c, r;
	cout << "2�� �������� ����� �Է��Ͻÿ�:";
	cin >> a >> b >> c;
	r = b * b - 4 * a * c;
	if (r >= 0)
		quad_eqn(a, b, c);
	else
		cout << "���� �����ϴ�." << endl;

	return 0;
}

void quad_eqn(double a, double b, double c)
{
	double x1, x2;
	x1 = (-b - sqrt(b * b - 4 * a * c)) / 2 * a;
	x2 = (-b + sqrt(b * b - 4 * a * c)) / 2 * a;
	if (x1 == x2)
		cout << "���� " << x1 << "�Դϴ�." << endl;
	else
		cout << "���� " << x1 << "�� " << x2 << "�Դϴ�." << endl;
	return;
}