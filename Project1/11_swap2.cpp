#include<iostream>
using namespace std;
void swap(int &x, int &y);

int main(void)
{
	int x = 100, y = 200;
	cout << "x : " << x << " y : " << y << endl;
	swap(x, y);
	cout << "x : " << x << " y : " << y << endl;
}

void swap(int& x, int& y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;

	return;
}