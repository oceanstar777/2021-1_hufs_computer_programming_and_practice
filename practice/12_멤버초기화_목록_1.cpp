//��� �ʱ�ȭ ����� �ݵ�� ����ؾ��ϴ� ���
//1. ����� ����� ���
#include<iostream>
#include<string>
using namespace std;

class car {
private:
	const int MAX_SPEED;
	int speed;	//�ӵ�
public:
	car() :MAX_SPEED(300)
	{}
	void print() {
		cout << MAX_SPEED << endl;
	}
};

int main(void)
{
	car c1;
	c1.print();
}