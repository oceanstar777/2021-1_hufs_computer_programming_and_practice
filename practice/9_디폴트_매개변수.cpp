#include<iostream>
#include<string>

using namespace std;

class Car {
private:
	int speed;
	int gear;
	string color;
public:
	Car(int speed, int gear, string color);	//함수원형에서는 디폴트 매개변수x

	void print();
};

Car::Car(int speed = 0, int gear = 1, string color = "White")
{
	this->speed = speed;
	this->gear = gear;
	this->color = color;
}

void Car::print()
{
	cout << "속도 : " << speed << endl;
	cout << "기어 : " << gear << endl;
	cout << "색상 : " << color << endl;
	cout << endl;
}

int main(void)
{
	Car c1,c2(100,5,"Black");

	c1.print();
	c2.print();
	return 0;
}