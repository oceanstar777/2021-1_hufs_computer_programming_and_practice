#include<iostream>
#include<string>
using namespace std;

class Car {
private:
	int speed;
	int gear;
	string color;
public:
	Car();
	Car(int speed, int gear, string color);
	void print(void);
};

Car::Car() {
	cout << "����Ʈ ������ ȣ��" << endl;
	speed = 0;
	gear = 1;
	color = "Red";
}

Car::Car(int speed, int gear, string color)
{
	cout << "�Ű������� �ִ� ������ ȣ��" << endl;
	this->speed = speed;
	this->gear = gear;
	this->color = color;
}

void Car::print(void)
{
	cout << "=================" << endl;
	cout << "�ӵ� : " << speed << endl;
	cout << "��� : " << gear << endl;
	cout << "���� : " << color << endl;
	cout << "=================" << endl;
}

int main(void)
{
	Car c1;
	Car c2(100, 5, "Black");
	c1.print();
	c2.print();

	return 0;
}