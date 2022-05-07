//함수가 객체를 반환하는 경우
//객체의 내용이 복사될 뿐, 원본이 전달되지 않는다
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
		speed(speed), gear(gear), color(color) {}
	void print() {
		cout << "속도 : " << speed << " 기어 : " << gear << " 색상 : " << color << endl;
	}
};

Car createCar()
{
	Car tmp(100, 4, "Metal");
	return tmp;		//객체를 반환할 때도 객체의 내용이 복사 될 뿐
					//원본이 전달되지 않음
}

int main(void)
{
	Car c;
	c.print();
	c = createCar();
	c.print();

	return 0;
}


