#include<iostream>
using namespace std;

int main(void)
{
	unsigned short a, b, c;
	int volume;
	cout << "���̸� �Է��ϼ��� : ";
	cin >> a;
	cout << "�ʺ� �Է��ϼ��� : ";
	cin >> b;
	cout << "���̸� �Է��ϼ��� : ";
	cin >> c;
	volume = a * b * c;

	cout << "������ ü�� : " << volume << endl;

	return 0;
}