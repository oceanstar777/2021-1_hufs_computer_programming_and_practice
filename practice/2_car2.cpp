//여러개의 객체 생성 가능
#include<iostream>
#include<string>
using namespace std;

class Car {
public:		//멤버변수 선언
	int speed;	
	int gear;
	string color;

	//멤버함수 선언
	void speed_up() {
		speed += 10;
	}
	void speed_down() {
		speed -= 10;
	}
	void show() {
		cout << "========================" << endl;
		cout << "속도 : " << speed << endl;
		cout << "기어 : " << gear << endl;
		cout << "색상 : " << color << endl;
		cout << "========================" << endl;
	}
};
int main(void)
{
	Car mycar, yourcar;
	mycar.speed = 100;
	mycar.gear = 3;
	mycar.color = "red";

	yourcar.speed = 10;
	yourcar.gear = 2;
	yourcar.color = "orange";

	mycar.speed_up();
	mycar.speed_up();

	yourcar.speed_down();
	yourcar.speed_up();

	mycar.show();
	yourcar.show();

	return 0;
}