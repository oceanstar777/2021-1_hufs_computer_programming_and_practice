//생성자에서 다른 생성자 호출하기
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
	cout << "속도 : " << speed << endl;
	cout << "기어 : " << gear << endl;
	cout << "색상 : " << color << endl;
}

int main(void)
{
	Car c1("Red");
	c1.print();

	return 0;
}
