#include<iostream>
using namespace std;

int main(void)
{
	int input, minute, second;
	const int SEC_PER_MINUTE = 60;

	cout << "초 단위의 시간을 입력하시요 : (32억초 이하)";
	cin >> input;	//초 단위의 시간을 읽는다.
	
	minute = input / SEC_PER_MINUTE;	//몇분
	second = input % SEC_PER_MINUTE;	//몇초

	cout << input << "초는" << minute << "분" << second << "초 입니다" << endl;

	return 0;


}