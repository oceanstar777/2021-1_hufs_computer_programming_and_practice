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
		name = "��ö��";
		num = 1;
		grade = 1;
	}	//������
	Student(string name, int num, int grade)
	{
		this->name = name;
		this->num = num;
		this->grade = grade;
	}//������
	void print(void);
	string get_name(void);
	void set_name(string name)
	{
		this->name = name;
	}

};
void Student::print(void)
{
	cout << "�̸� : " << name << " �й� : " << num << " �г� : " << grade << endl;
}
string Student::get_name(void)
{
	return name;
}//	������

int main(void)
{
	Student* p;
	p = new Student;
	cout << p->get_name() << endl;

	delete p;

}