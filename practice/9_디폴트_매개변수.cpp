#include<iostream>
#include<string>

using namespace std;

class Car {
private:
	int speed;
	int gear;
	string color;
public:
	Car(int speed, int gear, string color);	//�Լ����������� ����Ʈ �Ű�����x

	void print();
};

Car::Car(int speed = 0, int gear = 1, string color = "White")
{
	this->speed = speed;
	this->gear = gear;
	this->color = color;
}

void Car::print()
{
	cout << "�ӵ� : " << speed << endl;
	cout << "��� : " << gear << endl;
	cout << "���� : " << color << endl;
	cout << endl;
}

int main(void)
{
	Car c1,c2(100,5,"Black");

	c1.print();
	c2.print();
	return 0;
}