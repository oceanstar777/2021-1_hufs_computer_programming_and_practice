//�θ�Ŭ������ ��� �Լ� ȣ��
#include<iostream>
#include<string>
using namespace std;

class ParentClass {
public:
	void print() {
		cout << "�θ� Ŭ������ print()��� �Լ�" << endl;
	}
};

class ChildClass :public ParentClass {
public:
	void print() {
		ParentClass::print();	//�θ�Ŭ������ �Լ�ȣ��
		cout << "�ڽ� Ŭ������ print()��� �Լ�" << endl;
	}
};

int main(void)
{
	ChildClass obj;
	obj.print();
	return 0;
}