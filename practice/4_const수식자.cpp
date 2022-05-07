//멤버함수에 const를 붙이는 경우
//이 함수를 통하여 멤버 변수를 변경할 수 없다는 의미
//const가 붙는 함수를 상수멤버함수 라고 한다
//상수 멤버함수에서 멤버변수의 값을 변경하려고 하면 오류가 발생한다
//상수멤버함수 안에서 상수화되지 않은함수를 호출하면 오류가 발생한다(변경 가능성 배제)
//접근자의 경우에는 const를 붙이는편이 바람직하다

#include<iostream>
#include<string>
using namespace std;

class Car {
private:
	const int serial;
	int speed;
	int gear;
	string color;

public:
	Car(int serial, int speed, int gear, string color);
	void displaySpeed() const;
};

Car::Car(int serial = 1, int speed = 0, int gear = 1, string color = "white") :\
serial(serial), speed(speed),gear(gear),color(color){}

void Car::displaySpeed() const{
	//this->speed = 0; 오류! 상수멤버함수는 멤버변수의 값을 변경할수 없음
	cout << "속도 " << speed << endl;
}

int main(void)
{
	Car c1(1, 100, 4, "Blue");
	c1.displaySpeed();

	return 0;
}