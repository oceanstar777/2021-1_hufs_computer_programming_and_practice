#include<iostream>
#include<string>
#include<ctime>
using namespace std;

class Car {
private:
	int speed;
	int gear;
	string color;
public:
	void show();
	void speed_up();
	void speed_down();
	int get_speed();
	void set_speed(int speed);
	int get_gear();
	void set_gear(int gear);
	void set_color(string color);
	string get_color();
	void init(int speed, int gear, string color);
};