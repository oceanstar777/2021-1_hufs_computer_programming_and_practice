#include<iostream>
using namespace std;

int main(void)
{
	int x = 10, y = 3, z = 2;
	x += y -= 2;
	cout <<"x : "<< x <<" y : "<< y << endl;
	
	int x2 = 10, y2 = 3, z2 = 2;
	x2 *= y2 + 2;
	cout << "x : " << x2 << " y : " << y2 << endl;
	
	int x3 = 10, y3 = 3, z3 = 2;
	z3 = ++x3 + ++y3;
	cout << "x : " << x3 << " y : " << y3 << " z : " << z3 << endl;

	int x4 = 10, y4 = 3, z4 = 2;
	z4 = x4++ + ++y4;		//계산후 대입 , 계산전 대입
	cout << "x : " << x4 << " y : " << y4 << " z : " << z4 << endl;

	return 0;
}