//깊은복사
#include<iostream>
#include<string>

using namespace std;

class Student {
private:
	string* name;
	int number;
public:
	Student(string name, int number);
	Student(const Student& s);
	~Student();
	
	void print(void);
};

Student::Student(string name, int number)
{
	cout << "메모리 할당" << endl;
	this->name = new string(name);
	this->number = number;
}

Student::Student(const Student& s)
{
	cout << "복사 생성자 메모리 할당" << endl;
	this->name = new string(s.name);
	this->number = s.number;
}
Student::~Student()
{
	delete name;
}
void Student::print(void)
{
	cout << "이름 : " << name << endl;
	cout << "학번 : " << number << endl;
}

int main(void)
{
	Student s1("park",1001);
	Student s2(s1);

	s1.print();
	s2.print();

	return 0;
}