#include<iostream>
using namespace std;

int main(void)
{
	int* pi = new int;		//�ϳ��� int�� ���� �Ҵ�
	int* pia = new int[100];	//ũ�Ⱑ 100�� int�� ���� �迭 �Ҵ�
	double* pd = new double;	//�ϳ��� double�� ���� �Ҵ�
	double* pda = new double[100];	//ũ�Ⱑ 100�� double�� ���� �迭 �Ҵ�

	delete pi;
	delete[] pia;
	delete[] pda;
	delete pd;

	return 0;

}