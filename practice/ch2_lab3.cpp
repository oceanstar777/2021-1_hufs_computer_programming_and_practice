#include<iostream>
#include<string>

using namespace std;

int main(void)
{

	int coin,n,turn = 1,user;
	cout << "������ �� : ";
	cin >> coin;
	cout << endl;

	while (true)
	{
		
		cout << turn << "��° ��"<<endl;
		if (turn % 2 == 1) {
			user = 1;
		}
		else {
			user = 2;
		}
		cout << "�������� : " << coin << endl;
		cout <<"user"<<user<< " ��� ���ðڽ��ϱ�? : ";
		cin >> n;
		cout << endl;

		if ((n < 1) || (n > 3)) {
			cout << "1������ 3�� ���̸� �� �� �ֽ��ϴ�." << endl;
			continue;
		}

		coin -= n;
		turn++;
		if (coin <= 0) {
			cout << "user" << user << " �й�" << endl;
			break;
		}
	}
	return 0;
}