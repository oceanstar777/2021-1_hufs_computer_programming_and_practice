#include<iostream>

using namespace std;

int main(void)
{
	int age;	//����
	cout << "���̸� �Է��ϼ��� : ";
	cin >> age;
	if (age <= 12)
		cout << "��� �Դϴ�." << endl;
	else if (age <= 19)
		cout << "û�ҳ� �Դϴ�." << endl;
	else
		cout << "�����Դϴ�." << endl;

	return 0;
}