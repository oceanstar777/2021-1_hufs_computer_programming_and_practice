//묵시적 복사생성자 호출 (객체반환)
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
	Car(const Car& c);
	void print(void);
};

Car::Car(int speed, int gear, string color) :speed(speed), gear(gear), color(color)
{
	cout << "생성자 호출" << endl;
}
Car::Car(const Car& c):speed(c.speed),gear(c.gear),color(c.color)
{
	cout << "복사생성자 호출" << endl;
}
void Car::print()
{
	cout << "----------------" << endl;
	cout << "속도 : " << speed << endl;
	cout << "기어 : " << gear << endl;
	cout << "색상 : " << color << endl;
	cout << "================" << endl;
}

Car create_car(void)
{
	Car obj(0, 1, "yellow");
	return obj;
}

int main(void)
{
	Car c = create_car();
	c.print();
}