#include<iostream>

using namespace std;

int main(void)
{
	const int SEC_PER_MINUTE = 60;

	int	input, minute, second;
	
	cout << "�� ������ �ð��� �Է��ϼ��� : ";
	cin >> input;

	minute = input / SEC_PER_MINUTE;
	second = input % SEC_PER_MINUTE;

	cout << input << " �� ��" << minute << "��" << second << "�� �Դϴ�." << endl;

	return 0;
}