#include <iostream>
#include <string>

using namespace std;

int main() {
	string s1;
	string s2;

	do {
		cout << "종료하려면 1을 입력하시오" << endl;
		cin >> s2;
		s1 += s2;
	} while (s2 != "1");
	cout << s1;

	return 0;
}