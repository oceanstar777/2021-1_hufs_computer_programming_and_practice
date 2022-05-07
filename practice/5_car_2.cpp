#include<iostream>
#include<string>
using namespace std;

class Car {
private:
	int speed;		//�ӵ�
	int gear;		//���
	string color;	//����
public:
	Car(int speed, int gear, string color);
	void print();
};

Car::Car(int speed, int gear, string color)
{
	this->speed = speed;
	this->gear = gear;
	this->color = color;
}
void Car::print()
{
	cout << "=====================" << endl;
	cout << "�ӵ� : " << speed << endl;
	cout << "��� : " << gear << endl;
	cout << "=====================" << endl;
}

int main(void)
{
	Car c1(100,5,"Black");
	Car c2(10, 2, "Red");

	c1.print();
	c2.print();

	return 0;
}