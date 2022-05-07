#include<iostream>
#include<string>
using namespace std;

class Car
{
public:	//멤버변수 선언
	int speed;	//속도
	int gear;	//기어
	string color;	//색상
	//멤버함수 선언
	void speed_up() {
		speed += 10;
	}
	void speed_down() {
		speed -= 10;
	}
	void show() {
		cout << "=============" << endl;
		cout << "속도 : " << speed << endl;
		cout << "기어 : " << gear << endl;
		cout << "색상 : " << color << endl;
		cout << "=============" << endl;
	}

};
int main(void)
{
	Car* dyncar = new Car;	//객체 동적생성
	
	dyncar->speed = 100;
	dyncar->gear = 2;
	dyncar->color = "Green";
	dyncar->show();

	delete dyncar;
	return 0;
}