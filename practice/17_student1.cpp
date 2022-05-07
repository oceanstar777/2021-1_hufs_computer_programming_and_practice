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
	~Student(void);
	Student(const Student& s);
	void print(void);
};

Student::Student(string name, int number)
{
	this->name = new string(name);
	this->number = number;
}
Student::~Student(void)
{
	delete name;
}
Student::Student(const Student& s)
{
	this->name = new string(*(s.name));
	this->number = s.number;
}

void Student::print(void)
{
	cout << "이름 : " << * name << endl;
	cout << "학번 : " << number << endl;
}

int main(void)
{
	Student s1("kim", 1001);
	Student s2(s1);
	s1.print();
	s2.print();
}