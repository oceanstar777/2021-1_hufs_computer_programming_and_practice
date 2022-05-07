#include<iostream>
using namespace std;

int main(void)
{
	const float square_meter = 3.3058;
	double res, input;
	cout << "평수를 입력하세요 : ";
	cin >> input;
	res = input * square_meter;
	cout << input << "평은 " << res << "평방미터 입니다." << endl;
	return 0;
	
}