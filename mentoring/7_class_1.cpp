#include<iostream>
#include<string>
using namespace std;

class Student {
private:
	string name;
	int num;
	int grade;

public:
	Student() {
		name = "김철수";
		num = 1;
		grade = 1;
	}	//생성자
	Student(string name, int num, int grade)
	{
		this->name = name;
		this->num = num;
		this->grade = grade;
	}//생성자
	void print(void);
	string get_name(void);
	void set_name(string name)
	{
		this->name = name;
	}

};
void Student::print(void)
{
	cout << "이름 : " << name << " 학번 : " << num << " 학년 : " << grade << endl;
}
string Student::get_name(void)
{
	return name;
}//	접근자

int main(void)
{
	Student* p;
	p = new Student;
	cout << p->get_name() << endl;

	delete p;

}