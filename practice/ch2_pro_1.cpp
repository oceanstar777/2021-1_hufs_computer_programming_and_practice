#include<iostream>
using namespace std;

int get_minimum(int x1, int x2, int x3);
int main(void)
{
	int x1, x2, x3;
	cout << "정수 세개를 입력하세요 : ";
	cin >> x1>> x2>> x3;
	cout << "가장 작은 수 : " << get_minimum(x1, x2, x3) << endl;
	return 0;
}

int get_minimum(int x1, int x2, int x3)
{
	if ((x1 < x2) && (x1 < x3)) return x1;
	else if ((x2 < x1) && (x2 < x3)) return x2;
	else return x3;
}