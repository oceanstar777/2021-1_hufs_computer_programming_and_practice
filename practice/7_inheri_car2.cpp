//������� ������
#include<iostream>
#include<string>
using namespace std;

class Car {
public:
	int speed;
	int gear;
	string color;
	Car():speed(0),gear(0),color("White"){}
	void setSpeed(int speed) { this->speed = speed; }
	int getSpeed() { return speed; }
};

class SportsCar :public Car {
public:
	int speed;
	int gear;
	string color;
	SportsCar():speed(100),gear(3),color("Black"){}
};

int main(void)
{
	SportsCar sc;
	cout << "�ڽ� ���ǵ� : " << sc.speed << endl;
	cout << "�θ� ���ǵ� : " << sc.getSpeed() << endl;
	cout << "�θ� ���ǵ� : " << sc.Car::getSpeed() << endl;

	return 0;
}