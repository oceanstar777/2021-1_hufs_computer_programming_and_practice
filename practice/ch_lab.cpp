#include<iostream>
using namespace std;

double F2C(double f);
double C2F(double c);

int main(void)
{
	int choice;
	double temp;

	while(1)
	{
		cout << "��ȣ�� �Է��ϼ��� �����Ϸ��� 0�Է�" << endl;
		cout << "1.ȭ���� ������ �ٲٱ�" << endl;
		cout << "2.������ ȭ���� �ٲٱ�" << endl;
		cin >> choice;
		if (choice == 0) break;
		switch (choice)
		{
		case 1:
			cout << "ȭ���µ��� �Է��ϼ��� : ";
			cin >> temp;
			cout << "�����µ���" << F2C(temp) << "�Դϴ�." << endl<<endl;
			break;
		case 2:
			cout << "�����µ��� �Է��ϼ��� : ";
			cin >> temp;
			cout << "ȭ���µ���" << C2F(temp) << "�Դϴ�." << endl<<endl;
			break;
		default:
			cout << "�߸� �Է��ϼ̽��ϴ�." << endl<<endl;
			break;
		}
	}
	
	return 0;
}

double F2C(double f)
{
	double c;
	c = (5.0 / 9.0) * (f - 32);
	return c;
}
double C2F(double c)
{
	double f;
	f = (9.0 / 5.0) * c + 32;
	return f;
}