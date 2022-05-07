//임시객체 생성
#include<iostream>
#include<string>
using namespace std;

class Car {
private:
	int speed;
	int gear;
	string color;
public:
	Car(int speed = 0, int gear = 1, string color = "White")
	{
		this->speed = speed;
		this->gear = gear;
		this->color = color;
	}
	void print() {
		cout << "속도 : " << speed << " 기어 : " << gear;
		cout << " 색상 : " << color << endl;
	}

};

Car createCar() {
	Car tmp(0, 1, "Metal");
	return tmp;		//복사된 임시객체 반환
}

int main(void)
{
	createCar().print();		//임시객체를 통하여 print()호출
	return 0;
}
