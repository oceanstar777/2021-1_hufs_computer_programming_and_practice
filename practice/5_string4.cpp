#include<iostream>
#include<string>
using namespace std;

int main(void)
{
	string s1("Hello"), s2("World");
	if (s1 == s2)
		cout << "������ ���ڿ� �Դϴ�." << endl;
	else
		cout << "������ ���ڿ��� �ƴմϴ�." << endl;
	cout << "�������� �� " << endl;
	if (s1 > s2)
		cout << "s1�� �տ� �ֽ��ϴ�." << endl;
	else
		cout << "s2�� �տ� �ֽ��ϴ�." << endl;

	return 0;
}