#include<iostream>
using namespace std;

int main(void)
{
	const double PI = 3.141592;
	double radius,A,V;
	cout << "구의 반지름을 입력하세요 : ";
	cin >> radius;
	A = 4 * PI * radius * radius;
	V = (4.0 / 3.0) * PI * radius * radius * radius;

	cout << "구의 표면적 : " << A << endl;
	cout << "구의 부피 : " << V << endl;

	return 0;
}