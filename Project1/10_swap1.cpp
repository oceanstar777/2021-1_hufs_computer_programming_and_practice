#include<iostream>
using namespace std;


void swap(int x, int y);


int main(void)
{
	int x = 100, y = 200;
	cout << "바꾸기 전  = x : " << x << " y : " << y << endl;
	swap(x, y);
	cout << "바꾼 후 = x : " << x << " y : " << y << endl;
	return 0;
	//값이 바뀌지 않는다 call by value
}

void swap(int x, int y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
	return;
}