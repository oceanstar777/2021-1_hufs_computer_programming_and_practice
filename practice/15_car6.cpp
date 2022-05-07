//���������
#include<iostream>
#include<string>
using namespace std;

class Car {
private:
	int speed;	//�ӵ�
	int gear;	//���
	string color;	//����
public:
	Car(int speed, int gear, string color);
	Car(const Car& obj);
	void print(void);
};

Car::Car(int speed, int gear, string color) :speed(speed), gear(gear), color(color)
{
	cout << "������ ȣ��" << endl;
}
Car::Car(const Car& obj) : speed(obj.speed), gear(obj.gear), color(obj.color)
{
	cout << "��������� ȣ��" << endl;
}
void Car::print(void)
{
	cout << "====================" << endl;
	cout << "�ӵ� : " << speed << endl;
	cout << "��� : " << gear << endl;
	cout << "���� : " << color << endl;
	cout << "====================" << endl;
}

int main(void)
{
	Car c1(0,1,"yellow");
	Car c2 = c1;

	c1.print();
	c2.print();


	return 0;
}