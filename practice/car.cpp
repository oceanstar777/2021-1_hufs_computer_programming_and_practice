#include "car.h"

void Car::setSpeed(int speed)
{
	this->speed = speed;
}

int Car::getSpeed() {
	return speed;
}

void Car::setGear(int gear) {
	this->gear = gear;
}

int Car::getGear() {
	return gear;
}

void Car::setColor(string color) {
	this->color = color;
}

string Car::getColor() {
	return color;
}