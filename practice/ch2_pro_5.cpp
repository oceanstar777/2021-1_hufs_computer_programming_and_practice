#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;

int main(void)
{
	while (true) {
		srand((unsigned int)time(NULL));
		int computer = rand() % 3 + 1;
		int user;
		cout << "���������� ���� 1.���� 2.���� 3.�� : ";
		cin >> user;
		if (user < 1 || user>3) {
			cout << "�ٽ��Է��ϼ���" << endl;
		}
		if (user == 1 && computer == 3)
		{
			cout << "����ڴ� ���� ��ǻ�ʹ� �� ����� ��" << endl;
		}
		else if (user == 2 && computer == 1)
		{
			cout << "����ڴ� ���� ��ǻ�ʹ� ���� ����� ��" << endl;
		}
		else if (user == 3 && computer == 2)
		{
			cout << "����ڴ� �� ��ǻ�ʹ� ���� ����� ��" << endl;
		}
		else if (user == 1 && computer == 2) {
			cout << "����ڴ� ���� ��ǻ�ʹ� ���� ��ǻ�� ��" << endl;
		}
		else if (user == 2 && computer == 3) {
			cout << "����ڴ� ���� ��ǻ�ʹ� �� ��ǻ�� ��" << endl;
		}
		else {
			cout << "����ڴ� �� ��ǻ�ʹ� ���� ��ǻ�� ��" << endl;
		}
	}

	return 0;

}