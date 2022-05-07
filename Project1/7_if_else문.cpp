#include<iostream>
using namespace std;

int main(void)
{
	int score;
	cout << "점수를 입력하세요 : ";
	cin >> score;
	
	if (score >= 60)
	{
		cout << "합격입니다.\n";
		cout << "장학금도 받을 수 있습니다." << endl;
	}
	else
	{
		cout << "불합격입니다.\n";
		cout << "장학금을 받을 수 없습니다.\n" << endl;
	}

	return 0;
}