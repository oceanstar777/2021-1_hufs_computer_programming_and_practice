#include<iostream>
#include<string>
using namespace std;

int main(void)
{
	string s1("Hello"), s2("World");
	if (s1 == s2)
		cout << "동일한 문자열 입니다." << endl;
	else
		cout << "동일한 문자열이 아닙니다." << endl;
	cout << "사전순서 비교 " << endl;
	if (s1 > s2)
		cout << "s1이 앞에 있습니다." << endl;
	else
		cout << "s2가 앞에 있습니다." << endl;

	return 0;
}