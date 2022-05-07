#include<iostream>

using namespace std;

int main(void)
{
	int x, y;
	bool r1, r2, r3, r4;
	
	cout << "첫번째 정수를 입력하세요 : ";
	cin >> x;
	cout << "두번째 정수를 입력하세요 : ";
	cin >> y;
	cout << endl << endl;
	r1 = (x == y);
	r2 = (x != y);
	r3 = (x >= y);
	r4 = (x <= y);

	cout.setf(cout.boolalpha);
	cout << x << " == "<< y<<" : " << r1 << endl;
	cout << "x != y : " << r2 << endl;
	cout << "x >= y : " << r3 << endl;
	cout << "x <= y: " << r4 << endl;
	
	return 0;
}