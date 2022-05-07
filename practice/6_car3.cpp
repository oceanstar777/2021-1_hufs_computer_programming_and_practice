#include<iostream>
#include<string>
using namespace std;

class Car {
private:
	//멤버변수 선언
	int speed;	//속도
	int gear;	//기어
	string color;	//색상
public:
	//접근자
	int getSpeed() {
		return speed;
	}
	//설정자
	void setSpeed(int speed) {
		this->speed = speed;
	}
	//접근자
	int getGear() {
		return gear;
	}
	//설정자
	void setGear(int gear) {
		this->gear = gear;
	}
	//접근자
	string getColor() {
		return color;
	}
	//설정자
	void setColor(string color) {
		this->color = color;
	}
	void show() {
		cout << "내 차의 색상 : " << color << endl;
		cout << "내 차의 속도 : " << speed << endl;
		cout << "내 차의 기어 : " << gear << endl;
	}
};

int main(void)
{
	Car* mycar = new Car;
	mycar->setSpeed(100);
	mycar->setGear(3);
	mycar->setColor("red");
	mycar->show();
	
	delete mycar;
	return 0;
	
}