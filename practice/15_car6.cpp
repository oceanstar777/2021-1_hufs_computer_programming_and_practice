//복사생성자
#include<iostream>
#include<string>
using namespace std;

class Car {
private:
	int speed;	//속도
	int gear;	//기어
	string color;	//색상
public:
	Car(int speed, int gear, string color);
	Car(const Car& obj);
	void print(void);
};

Car::Car(int speed, int gear, string color) :speed(speed), gear(gear), color(color)
{
	cout << "생성자 호출" << endl;
}
Car::Car(const Car& obj) : speed(obj.speed), gear(obj.gear), color(obj.color)
{
	cout << "복사생성자 호출" << endl;
}
void Car::print(void)
{
	cout << "====================" << endl;
	cout << "속도 : " << speed << endl;
	cout << "기어 : " << gear << endl;
	cout << "색상 : " << color << endl;
	cout << "====================" << endl;
}

int main(void)
{
	Car c1(0,1,"yellow");
	Car c2 = c1;

	c1.print();
	c2.print();


	return 0;
}