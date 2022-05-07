#include<iostream>
using namespace std;

void swap(int* px, int* py);

int main(void)
{
	int x = 100, y = 200;
	cout << "x : " << x << " y : " << y << endl;
	swap(&x, &y);
	cout << "x : " << x << " y : " << y << endl;

	return 0;
}

void swap(int* px, int* py)
{
	int temp;
	temp = *px;
	*px = *py;
	*py = temp;

	return;
}