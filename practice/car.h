#include<iostream>
#include<string>
using namespace std;

class Car {
private:
	int speed;	//속도
	int gear;	//기어
	string color;	//색상
public:
	int getSpeed();
	void setSpeed(int speed);
	int getGear();
	void setGear(int gear);
	void setColor(string color);
	string getColor();
};