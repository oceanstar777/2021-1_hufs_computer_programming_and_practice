#include<iostream>
#include<string>

using namespace std;

int main(void)
{
	cout.setf(cout.boolalpha);
	string a= "123";
	a.insert(2, "abc");
	cout << a << endl;
	a.erase(1, 3);
	cout << a << endl;

	cout<<a.empty()<<endl;
	string b;
	a.find(b,1);	//a.find(찾을 문자열, 탐색 시작위치);
	cout << a.size() << endl;	//문자열 길이
}