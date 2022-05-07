//멤버변수에 const를 붙이는 경우
//멤버변수에 const가 붙으면 상수가 된다.
//변경하지 않을 멤버변수를 상수로 바꾸는게 좋다

#include<iostream>
#include<string>
using namespace std;

class Car {
private:
	const int serial;	//상수 멤버 변수
	int speed;
	int gear;
	string color;
	
public:
	Car(int serial, int speed, int gear, string color);
	void print();
};

Car::Car(int serial = 0, int speed =0, int gear = 1, string color ="White") :\
serial(serial),speed(speed),gear(gear),color(color){}
void Car::print()
{
	cout << "번호 : " << serial << " 속도 : " << speed << " 기어 : " << gear << " 색상 : " << color << endl;
}
int main(void)
{
	Car c1(1, 0, 1, "White");
	Car c2(2, 0, 1, "Red");
	Car c3(3, 0, 1, "Blue");
	Car c4(4);
	c1.print();
	c2.print();
	c3.print();
	c4.print();
	return 0;
}