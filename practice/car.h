#include<iostream>
#include<string>
using namespace std;

class Car {
private:
	int speed;	//�ӵ�
	int gear;	//���
	string color;	//����
public:
	int getSpeed();
	void setSpeed(int speed);
	int getGear();
	void setGear(int gear);
	void setColor(string color);
	string getColor();
};