//�ݺ��� �̿��� ���� ���α׷�
#include<iostream>

using namespace std;

int main(void)
{
	int answer = 59;	//����
	int guess;
	int tries = 0;

	do {				//�� ����
		cout << "������ �����Ͽ� ������ : ";
		cin >> guess;
		tries++;

		if (guess > answer)		//����ڰ� �Է��� ������ ���亸�� ������
			cout << "������ ������ �����ϴ�." << endl;
		else if (guess < answer)
			cout << "������ ������ �����ϴ�." << endl;
	} while (guess != answer);		//�� ����
	cout << "�����մϴ�. �õ� Ƚ�� = " << tries << endl;
	
	return 0;
}