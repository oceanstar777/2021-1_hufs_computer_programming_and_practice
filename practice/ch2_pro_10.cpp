#include<iostream>
#include<cmath>
using namespace std;

void quad_eqn(double a, double b, double c);

int main(void)
{
	double a, b, c, r;
	cout << "2차 방정식의 계수를 입력하시오:";
	cin >> a >> b >> c;
	r = b * b - 4 * a * c;
	if (r >= 0)
		quad_eqn(a, b, c);
	else
		cout << "근이 없습니다." << endl;

	return 0;
}

void quad_eqn(double a, double b, double c)
{
	double x1, x2;
	x1 = (-b - sqrt(b * b - 4 * a * c)) / 2 * a;
	x2 = (-b + sqrt(b * b - 4 * a * c)) / 2 * a;
	if (x1 == x2)
		cout << "근은 " << x1 << "입니다." << endl;
	else
		cout << "근은 " << x1 << "와 " << x2 << "입니다." << endl;
	return;
}