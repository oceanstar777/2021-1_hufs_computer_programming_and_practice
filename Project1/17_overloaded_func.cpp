//��ȯ���� �Է°��� �޶�� �Ѵ� - �߿�!

#include<iostream>
using namespace std;

int square(int n);
double square(double n);

int main(void)
{
	cout << square(10) << endl;
	cout << endl;
	cout << square(2.0) << endl;

	return 0;
}

int square(int n)
{
	cout << "int square(int n) ȣ��" << endl;
	return(n * n);
}

double square(double n)
{
	cout << "double square(double n) ȣ��" << endl;
	return (n * n);
}