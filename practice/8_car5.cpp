#include<iostream>
#include<string>
using namespace std;

class Car {
private:
	int gear;
	int speed;
	string color;
public:
	void setSpeed(int speed);
	void setSpeed(double speed);
	int getSpeed();
	void setGear(int gear);
	int getGear();
};

void Car::setSpeed(int speed) {
	this->speed = speed;
}
void Car::setSpeed(double speed) {
	this->speed = (int)speed;
}

int Car::getSpeed() {
	return speed;
}

int Car::getGear() {
	return gear;
}

void Car::setGear(int gear) {
	this->gear = gear;
}

int main(void) {
	Car mycar;
	mycar.setSpeed(80);
	mycar.setSpeed(100.0);
	cout << mycar.getSpeed() << endl;
}