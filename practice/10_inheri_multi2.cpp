//���߻���� ������
//��� ��ħ
#include<iostream>
#include<string>
using namespace std;

class SuperA {
public:
	int x;
	void sub() {
		cout << "SuperA�� sub()" << endl;
	}
};

class SuperB {
public:
	int x;
	void sub() {
		cout << "SuperB�� sub()" << endl;
	}
};

class Sub :public SuperA, public SuperB {
};

int main(void)
{
	Sub s;
	//s.sub();		//���� � �θ�Ŭ������ ������� �𸥴�
	//���� �����ڸ� ����Ͽ� �ذ��� ����
	s.SuperA::sub();
	s.SuperB::sub();

	return 0;
}