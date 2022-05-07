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
		cout << "가위바위보 게임 1.가위 2.바위 3.보 : ";
		cin >> user;
		if (user < 1 || user>3) {
			cout << "다시입력하세요" << endl;
		}
		if (user == 1 && computer == 3)
		{
			cout << "사용자는 가위 컴퓨터는 보 사용자 승" << endl;
		}
		else if (user == 2 && computer == 1)
		{
			cout << "사용자는 바위 컴퓨터는 가위 사용자 승" << endl;
		}
		else if (user == 3 && computer == 2)
		{
			cout << "사용자는 보 컴퓨터는 바위 사용자 승" << endl;
		}
		else if (user == 1 && computer == 2) {
			cout << "사용자는 가위 컴퓨터는 바위 컴퓨터 승" << endl;
		}
		else if (user == 2 && computer == 3) {
			cout << "사용자는 바위 컴퓨터는 보 컴퓨터 승" << endl;
		}
		else {
			cout << "사용자는 보 컴퓨터는 가위 컴퓨터 승" << endl;
		}
	}

	return 0;

}