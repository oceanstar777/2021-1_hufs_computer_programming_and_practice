#include<iostream>
#include<string>
using namespace std;

class Car {
public:
	string kind = "����";
	string color = "���";
	int zeroback = 3;
	void speed_up() {
		speed += 10;
	}
	void speed_down() {
		speed -= 10;
	}
	int show_speed() {
		return speed;
	}
private:
	int speed = 0;
};



int main(void)
{
	Car* car = new Car;
	cout << car->zeroback << endl;
	car->speed_up();
	//cout << car->speed << endl; private ��� ���� �ǵ帱�� ����
	cout << car -> show_speed() << endl;
	delete car;
	return 0;
}