#include<iostream>
#include<string>
using namespace std;

struct Student {
	string name;
	int number;
	int age;

	void show() {
		cout << "�� �̸��� " << name << endl;
		cout << "�� ���̴� " << age << endl;
	}

};
//����ü�� ���� �� ����
int main(void)
{
	Student s;
	s.name = "ȫ�浿";
	s.number = 1;
	s.age = 10;
	s.show();
	return 0;
}