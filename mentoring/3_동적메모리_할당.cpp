#include<iostream>
#include<string>

using namespace std;

int main(void)
{
	int* p = new int;	//�Ϲ� ������ ���
	int *a = new int[10];	//�迭�� ���

	delete p;
	delete[] a;		//�迭 ������ ��� ���ȣ ����

	return 0;
}