//�������� ��ü ���� ����
#include<iostream>
#include<string>
using namespace std;

class Car {
public:		//������� ����
	int speed;	
	int gear;
	string color;

	//����Լ� ����
	void speed_up() {
		speed += 10;
	}
	void speed_down() {
		speed -= 10;
	}
	void show() {
		cout << "========================" << endl;
		cout << "�ӵ� : " << speed << endl;
		cout << "��� : " << gear << endl;
		cout << "���� : " << color << endl;
		cout << "========================" << endl;
	}
};
int main(void)
{
	Car mycar, yourcar;
	mycar.speed = 100;
	mycar.gear = 3;
	mycar.color = "red";

	yourcar.speed = 10;
	yourcar.gear = 2;
	yourcar.color = "orange";

	mycar.speed_up();
	mycar.speed_up();

	yourcar.speed_down();
	yourcar.speed_up();

	mycar.show();
	yourcar.show();

	return 0;
}