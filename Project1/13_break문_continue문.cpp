//�ҹ��ڸ� �빮�ڷ� �����ϱ�
#include<iostream>

using namespace std;

int main(void)
{
	char letter;

	while (1) {
		cout << "�ҹ��ڸ� �Է��ϼ��� : ";
		cin >> letter;		//���鹮�� ����

		if (letter == 'Q') break;
		if (letter < 'a' || letter>'z') continue;	//ó������ ���
		letter -= 32;		//�ҹ��� -> �빮��
		
		cout << "��ȯ�� �빮�ڴ� " << letter << "�Դϴ�." << endl;
	}
	return 0;
}