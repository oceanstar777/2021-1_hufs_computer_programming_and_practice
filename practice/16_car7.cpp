//디폴트 복사생성자
#include<iostream>
#include<string>
using namespace std;

class Car {
private:
	int speed;
	int gear;
	string color;
public:
	Car(int speed, int gear, string color);
	void print();
};

Car::Car(int speed, int gear, string color) :speed(speed), gear(gear), color(color)
{}
void Car::print()
{
	cout << "==================" << endl;
	cout << "속도 : " << speed << endl;
	cout << "기어 : " << gear << endl;
	cout << "색상 : " << color << endl;
}
int main(void)
{
	Car c1(0, 1, "yellow");
	Car c2 = c1;
	c1.print();
	c2.print();

	return 0;
}