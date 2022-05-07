//객체에const를 붙이는 경우
//객체에 const가 붙는다면 이 객체를 통해서는 멤버변수의 값을 변경할 수 없다
//멤버함수의 경우에도 상수멤버 함수가 아니면 호출 할 수 없다.
#include<iostream>
#include<string>
using namespace std;
class Car {
private:
	int speed;
	int gear;
	string color;
public:
	Car(int speed, int gear, string color):speed(speed),gear(gear),color(color){}
	void setSpeed(int speed)
	{
		this->speed = speed;
	}
};




int main(void)
{
	const Car c1(0, 1, "yellow");
	//c1.setSpeed(3);// const로 설정된 객체를 통해 멤버변수 변경 불가


	return 0;
}