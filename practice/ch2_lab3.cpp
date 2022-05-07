#include<iostream>
#include<string>

using namespace std;

int main(void)
{

	int coin,n,turn = 1,user;
	cout << "동전의 수 : ";
	cin >> coin;
	cout << endl;

	while (true)
	{
		
		cout << turn << "번째 턴"<<endl;
		if (turn % 2 == 1) {
			user = 1;
		}
		else {
			user = 2;
		}
		cout << "남은동전 : " << coin << endl;
		cout <<"user"<<user<< " 몇개를 빼시겠습니까? : ";
		cin >> n;
		cout << endl;

		if ((n < 1) || (n > 3)) {
			cout << "1개에서 3개 사이만 뺄 수 있습니다." << endl;
			continue;
		}

		coin -= n;
		turn++;
		if (coin <= 0) {
			cout << "user" << user << " 패배" << endl;
			break;
		}
	}
	return 0;
}