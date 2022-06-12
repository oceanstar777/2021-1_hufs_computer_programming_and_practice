#include<iostream>
#include<string>
using namespace std;

struct Student {
	string name;
	int number;
	int age;

	void show() {
		cout << "내 이름은 " << name << endl;
		cout << "내 나이는 " << age << endl;
	}

};
//구조체는 거의 안 쓰임
int main(void)
{
	Student s;
	s.name = "홍길동";
	s.number = 1;
	s.age = 10;
	s.show();
	return 0;
}