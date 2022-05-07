#include<iostream>
#include<typeinfo>

using namespace std;

int main(void)
{
	cout << 6 / 5 << typeid(6 / 5).name() << endl;
	cout << 6.0 / 5 << typeid(6.0 / 5).name() << endl;
	cout << (int)6.0 / (int)5.0 << typeid((int)6.0 / (int)5.0).name() << endl;
	cout << 3 / 5 * 6.0 << typeid(3 / 5 * 6.0).name() << endl;
	cout << (1 <= 2 && 3 >= 1) << typeid(1 <= 2 && 3 >= 1).name() << endl;

	return 0;
}