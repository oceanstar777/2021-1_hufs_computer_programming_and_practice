//c언어의 함수의 반환값은 1개
//필요성
//1.반복할 때
//2.모듈화 -> 문제가 생겼을 때 해당 모듈만 찾아보면 된다
// 업데이트가 쉽다, 더 빨리 프로그램을 짤 수 있다.
//  
//
#include<iostream>
using namespace std;

int add(int x, int y);

int main(void)
{
	int x, y;
	cin >> x >> y;
	printf("%d", add(x, y));
	return 0;
}


int add(int x, int y)
{
	int result;
	result = x + y;
	return result;
}
