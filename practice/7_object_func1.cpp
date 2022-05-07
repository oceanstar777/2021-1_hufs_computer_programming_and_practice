//객체가 함수의 매개변수로 전달되는 경우
//함수의 인자수는 매개변수로 전달, 인수가 객체일 때도 마찬가지
#include<iostream>
#include<string>
using namespace std;

class Car {
private:
	int speed;
	int gear;
	string color;
public:
	Car(int speed = 0, int gear = 1, string color = "White") :\
		speed(speed), gear(gear), color(color){}
	void print() {
		cout << "속도 : " << speed << " 기어 : " << gear << " 색상 : " << color << endl;
	}
};

void swapObject(Car c1, Car c2)
{
	Car tmp;
	tmp;
	c1 = c2;
	c2 = tmp;
}

int main(void)
{
	Car red(0, 1, "Red");
	Car blue(30, 2, "Blue");
	
	swapObject(red, blue);
	red.print();
	blue.print();
	return 0;
}
// 값이 복사되지 않는다 call by value이기 때문
