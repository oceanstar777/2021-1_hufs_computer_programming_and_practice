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
		name = 1;
		num = 1;
		grade = 1;
	}
	Student(string name, int num, int grade)
	{
		this->name = name;
		this->num = num;
		this->grade = grade;
	}//������
	void print() {
		cout << "�̸� : " << name << " �й� : " << num << " �г� : " << grade << endl;
	}

};
int main(void) 
{
	Student Class[5] = { Student("1��",1,1),
		Student("2��",2,2),
		Student("3��",3,3),
		Student("4��",4,4),
		Student("5��",5,5), };
	Student* p = Class;
	for (int i = 0; i < 5; i++)
	{
		Class[i].print();
	}
	for (int i = 0; i < 5; i++)
	{
		(p + i)->print();
	}

	return 0;
}