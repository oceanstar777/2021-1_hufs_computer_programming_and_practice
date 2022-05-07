#include<iostream>
using namespace std;

int main(void)
{
	int x = 0, y = 0;	//x와 y를 모두 0으로 초기화
	char grade = 'A';	//문자 A의 아스키코드를 grade에 대입
	double rate = 1e10;		//rate에 1x10^10을 대입
	int salary = 2000000;	//salary에 2,000,000을 대입

	cout << x << " " << y << endl;
	cout << (short)grade << endl;
	cout << rate << endl;
	cout << salary << endl;
	
	return 0;
}