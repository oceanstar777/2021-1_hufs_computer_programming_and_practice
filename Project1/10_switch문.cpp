#include<iostream>

using namespace std;

int main(void)
{
	int vowel = 0, consonant = 0;
	char ch;

	cout << "�����ڸ� �Է��ϰ� ctrl-z�� �Է��ϼ���" << endl;
	while (cin >> ch)	//ctrl-z = ���ͷ�Ʈ
	{
		switch (ch)
		{
			case 'a':		//�ǵ����� break ���� ���� ��� vowel ����
			case 'e':		//case�ڿ� ��ȣ �Է����� �ʾƵ� �ȴ�
			case 'i':
			case 'o':
			case 'u':
				vowel++;
				break;		//switch�� Ż��
			default:		//default�� �ʿ���
				consonant++;
				break;		//switch�� Ż��
		}
	}
	cout << "���� : " << vowel << endl;
	cout << "���� : " << consonant << endl;

	return 0;

}