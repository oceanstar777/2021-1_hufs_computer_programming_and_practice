#include<iostream>
using namespace std;

int main(void)
{
	int var;
	int& ref = var;	//������ ����

	var = 10;
	cout << "var�� �� : " << var << endl;
	cout << "ref�� �� : " << ref << endl;
	
	ref = 20;
	cout << "var�� �� : " << var << endl;
	cout << "ref�� �� : " << ref << endl;

	return 0;
}