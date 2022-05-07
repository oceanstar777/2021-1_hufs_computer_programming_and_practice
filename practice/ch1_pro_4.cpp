#include<iostream>
using namespace std;

int main(void)
{
	const int HOUR2SEC = 3600;
	const int MIN2SEC = 60;

	int hour, min, sec, res = 0;
	cout << "시 분 초 를 입력하세요(공백단위 구분) : ";
	cin >> hour >> min >> sec;
	res += hour * HOUR2SEC;
	res += min * MIN2SEC;
	res += sec;

	cout << hour << "시간 " << min << "분 " << sec << "초 는 " << res << "초 입니다." << endl;
	
	return 0;

}