#include<iostream>
#include<string>
using namespace std;

class Car {
private:
	int speed;
	int gear;
	string color;
public:
	Car();
	Car(int speed, int gear, string color);
	void print(void);
};

Car::Car() {
	cout << "디폴트 생성자 호출" << endl;
	speed = 0;
	gear = 1;
	color = "Red";
}

Car::Car(int speed, int gear, string color)
{
	cout << "매개변수가 있는 생성자 호출" << endl;
	this->speed = speed;
	this->gear = gear;
	this->color = color;
}

void Car::print(void)
{
	cout << "=================" << endl;
	cout << "속도 : " << speed << endl;
	cout << "기어 : " << gear << endl;
	cout << "색상 : " << color << endl;
	cout << "=================" << endl;
}

int main(void)
{
	Car c1;
	Car c2(100, 5, "Black");
	c1.print();
	c2.print();

	return 0;
}