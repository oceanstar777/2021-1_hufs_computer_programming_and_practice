#include <iostream>
#include <string>

using namespace std;

int main() {
	string s1;
	string s2;

	do {
		cout << "�����Ϸ��� 1�� �Է��Ͻÿ�" << endl;
		cin >> s2;
		s1 += s2;
	} while (s2 != "1");
	cout << s1;

	return 0;
}