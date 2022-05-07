//멤버변수 재정의
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
	cout << "자식 스피드 : " << sc.speed << endl;
	cout << "부모 스피드 : " << sc.getSpeed() << endl;
	cout << "부모 스피드 : " << sc.Car::getSpeed() << endl;

	return 0;
}