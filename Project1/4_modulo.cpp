#include<iostream>
using namespace std;

int main(void)
{
	int input, minute, second;
	const int SEC_PER_MINUTE = 60;

	cout << "�� ������ �ð��� �Է��Ͻÿ� : (32���� ����)";
	cin >> input;	//�� ������ �ð��� �д´�.
	
	minute = input / SEC_PER_MINUTE;	//���
	second = input % SEC_PER_MINUTE;	//����

	cout << input << "�ʴ�" << minute << "��" << second << "�� �Դϴ�" << endl;

	return 0;


}