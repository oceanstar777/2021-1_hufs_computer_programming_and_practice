//다중상속의 문제점
//멤버 겹침
#include<iostream>
#include<string>
using namespace std;

class SuperA {
public:
	int x;
	void sub() {
		cout << "SuperA의 sub()" << endl;
	}
};

class SuperB {
public:
	int x;
	void sub() {
		cout << "SuperB의 sub()" << endl;
	}
};

class Sub :public SuperA, public SuperB {
};

int main(void)
{
	Sub s;
	//s.sub();		//오류 어떤 부모클래스의 멤버인지 모른다
	//범위 지정자를 사용하여 해결은 가능
	s.SuperA::sub();
	s.SuperB::sub();

	return 0;
}