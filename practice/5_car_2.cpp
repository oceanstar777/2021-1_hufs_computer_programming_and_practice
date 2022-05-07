#include<iostream>
#include<string>
using namespace std;

class Car {
private:
	int speed;		//속도
	int gear;		//기어
	string color;	//색상
public:
	Car(int speed, int gear, string color);
	void print();
};

Car::Car(int speed, int gear, string color)
{
	this->speed = speed;
	this->gear = gear;
	this->color = color;
}
void Car::print()
{
	cout << "=====================" << endl;
	cout << "속도 : " << speed << endl;
	cout << "기어 : " << gear << endl;
	cout << "=====================" << endl;
}

int main(void)
{
	Car c1(100,5,"Black");
	Car c2(10, 2, "Red");

	c1.print();
	c2.print();

	return 0;
}