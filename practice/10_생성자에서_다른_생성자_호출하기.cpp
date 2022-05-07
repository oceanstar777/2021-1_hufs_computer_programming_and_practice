//�����ڿ��� �ٸ� ������ ȣ���ϱ�
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
	Car(string c);
	void print(void);
};

Car::Car(int speed, int gear, string color)
{
	this->speed = speed;
	this->gear = gear;
	this->color = color;
}

Car::Car(string c) : Car(0,0,c)
{
}

void Car::print(void)
{
	cout << "�ӵ� : " << speed << endl;
	cout << "��� : " << gear << endl;
	cout << "���� : " << color << endl;
}

int main(void)
{
	Car c1("Red");
	c1.print();

	return 0;
}
