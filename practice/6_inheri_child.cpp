//부모클래스의 멤버 함수 호출
#include<iostream>
#include<string>
using namespace std;

class ParentClass {
public:
	void print() {
		cout << "부모 클래스의 print()멤버 함수" << endl;
	}
};

class ChildClass :public ParentClass {
public:
	void print() {
		ParentClass::print();	//부모클래스의 함수호출
		cout << "자식 클래스의 print()멤버 함수" << endl;
	}
};

int main(void)
{
	ChildClass obj;
	obj.print();
	return 0;
}