//디폴트 생성자 => 얕은복사 문제
#include<iostream>
#include<string>
using namespace std;

class Student {
private:
	string* name;
	int number;
public:
	Student(string name, int n);
	~Student();
};

Student::Student(string name, int n)
{
	cout << "메모리 할당" << endl;
	this->name = new string(name);
}
Student::~Student() 
{
	cout << "메모리 반납" << endl;
	delete name;
}

int main(void)
{
	Student s1("Park", 201001);
	Student s2(s1);	//복사 생성자 호출
	return 0;
}