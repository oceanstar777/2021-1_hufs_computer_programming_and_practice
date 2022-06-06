#include<iostream>
#include<string>
using namespace std;

int main(void)
{
	string s1="안녕하세요 저는 xx입니다.";		//string class
	cout << s1 << endl;
	string s2;

	getline(cin, s2);
	cout << s2;
	
}