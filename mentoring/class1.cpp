#include<iostream>
#include<string>
using namespace std;
class Car {
public:			//public ��� : �ܺο����� ��ҿ� ���ٰ��� 
	string kind = "����";
	int zeroback = 3;
	string color = "���";
	int speed = 0;

	void speed_up() {
		speed += 10;
	}
	void speed_down() {
		speed -= 10;
	}
};


int main(void)
{
	Car* car = new Car;	//�����Ҵ� ����
	cout << (*car).kind << endl;	//�̷��Ե� ����
	car->speed_up();		//����Լ��� ���� ����
	cout << car->speed << endl;
	delete car;
	return 0;
}