#include<iostream>
using namespace std;

int main(void)
{
	int score;
	cout << "������ �Է��ϼ��� : ";
	cin >> score;
	
	if (score >= 60)
	{
		cout << "�հ��Դϴ�.\n";
		cout << "���бݵ� ���� �� �ֽ��ϴ�." << endl;
	}
	else
	{
		cout << "���հ��Դϴ�.\n";
		cout << "���б��� ���� �� �����ϴ�.\n" << endl;
	}

	return 0;
}