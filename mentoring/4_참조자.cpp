#include<iostream>
#include<string>
using namespace std;

int main(void)
{
	int a = 1;

	int& b = a;		//������, �ݵ�� ����� ���ÿ� �ʱ�ȭ �ʿ�
			//�����ʹ� ���氡��, �����ڴ� ����� ���ÿ� ��� ��� �ؾ���


	b = 2;
	cout << a << " " << b << endl;
	int* p = &a;
	cout << *p << endl;


	return 0;
}