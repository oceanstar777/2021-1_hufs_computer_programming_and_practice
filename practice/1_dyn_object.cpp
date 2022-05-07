//객체포인터
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

Car::Car(int speed = 0,int gear = 1, string color = "White")\
	:speed(speed), gear(gear), color(color) {}
void Car::print()
{
	cout << "속도 : " << speed << " 기어 : " << gear << " 색상 : " \
		<< color << endl;
}

int main(void)
{
	Car c1;
	c1.print();
	
	Car* c2 = new Car(100, 5, "Black");
	c2->print();
	delete c2;

	return 0;
}