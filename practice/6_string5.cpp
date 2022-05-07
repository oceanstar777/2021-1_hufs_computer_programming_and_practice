#include<iostream>
#include<string>
using namespace std;

int main(void)
{
	/*string s;
	cin >> s;	//공백문자 전까지 읽기
	cout << s << endl;

	string line;
	getline(cin, line);
	cout << line << endl;
	*/
	string line2;
	char c;
	do {
		cin.get(c);
		line2 += c;
	} while (c != '\n');
	cout << line2 << endl;
	return 0;
}