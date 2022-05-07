#include "car_race.h"

void Car::set_speed(int speed)
{
	this->speed = speed;
	return;
}

int Car::get_speed()
{
	return speed;
}

void Car::set_gear(int gear)
{
	this->gear = gear;
	return;
}

int Car::get_gear()
{
	return gear;
}

void Car::set_color(string color)
{
	this->color = color;
	return;
}

string Car::get_color() {
	return color;
}
void Car::show() {
	cout << get_speed() << endl;
	cout << get_gear() << endl;
	cout << get_color() << endl;
	return;
}

void Car::init(int speed, int gear, string color)
{
	set_speed(speed);
	set_gear(gear);
	set_color(color);
	return;
}

void Car::speed_down() {
	if (speed < 0) {
		speed = 0;
	}
	else
		speed -= 10;
}

void Car::speed_up() {
	speed += 10;
}
