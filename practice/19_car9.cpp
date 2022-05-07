//������ ��������� ȣ�� (��ü��ȯ)
#include<iostream>
#include<string>
using namespace std;

class Car {
private:
	int speed;
	int gear;
	string color;
public:
	Car(int speed, int gear, string color);
	Car(const Car& c);
	void print(void);
};

Car::Car(int speed, int gear, string color) :speed(speed), gear(gear), color(color)
{
	cout << "������ ȣ��" << endl;
}
Car::Car(const Car& c):speed(c.speed),gear(c.gear),color(c.color)
{
	cout << "��������� ȣ��" << endl;
}
void Car::print()
{
	cout << "----------------" << endl;
	cout << "�ӵ� : " << speed << endl;
	cout << "��� : " << gear << endl;
	cout << "���� : " << color << endl;
	cout << "================" << endl;
}

Car create_car(void)
{
	Car obj(0, 1, "yellow");
	return obj;
}

int main(void)
{
	Car c = create_car();
	c.print();
}