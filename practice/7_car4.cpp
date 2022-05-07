#include<iostream>
#include<string>
using namespace std;


class Car {
private:
	int speed;
	int gear;
	string color;

public:
	void setSpeed(int speed);
	int getSpeed();
	void setGear(int gear);
	int getGear();
	void setColor(string color);
	string getColor();
	void show();
};

void Car::setSpeed(int speed)
{
	if (speed < 0)
	{
		this->speed = 0;
	}
	else {
		this->speed = speed;
	}
}

int Car::getSpeed() {
	return speed;
}

void Car::setColor(string color)
{
	this->color = color;
}

string Car::getColor() {
	return color;
}

int Car::getGear() {
	return gear;
}
void Car::setGear(int gear) {
	this->gear = gear;
}
void Car::show() {
	cout << "기어 : " << gear << endl;
	cout << "속도 : " << speed << endl;
	cout << "색상 : " << color << endl;
}


int main(void)
{
	Car* dyncar = new Car;
	dyncar->setSpeed(100);
	dyncar->setGear(2);
	dyncar->setColor("Green");
	dyncar->show();
	delete dyncar;
	return 0;
}