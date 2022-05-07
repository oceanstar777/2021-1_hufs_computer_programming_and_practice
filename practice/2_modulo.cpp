#include<iostream>

using namespace std;

int main(void)
{
	const int SEC_PER_MINUTE = 60;

	int	input, minute, second;
	
	cout << "초 단위의 시간을 입력하세요 : ";
	cin >> input;

	minute = input / SEC_PER_MINUTE;
	second = input % SEC_PER_MINUTE;

	cout << input << " 초 는" << minute << "분" << second << "초 입니다." << endl;

	return 0;
}