#include<iostream>
using namespace std;


void swap(int x, int y);


int main(void)
{
	int x = 100, y = 200;
	cout << "�ٲٱ� ��  = x : " << x << " y : " << y << endl;
	swap(x, y);
	cout << "�ٲ� �� = x : " << x << " y : " << y << endl;
	return 0;
	//���� �ٲ��� �ʴ´� call by value
}

void swap(int x, int y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
	return;
}