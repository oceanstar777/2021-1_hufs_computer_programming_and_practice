//����Ʈ ������ => �������� ����
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
	cout << "�޸� �Ҵ�" << endl;
	this->name = new string(name);
}
Student::~Student() 
{
	cout << "�޸� �ݳ�" << endl;
	delete name;
}

int main(void)
{
	Student s1("Park", 201001);
	Student s2(s1);	//���� ������ ȣ��
	return 0;
}