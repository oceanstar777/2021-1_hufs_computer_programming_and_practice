//상속
#include<iostream>
#include<string>
using namespace std;

class Car {
public:
	int speed;
	int gear;
	string color;

	void setGear(int gear)
	{
		this->gear = gear;
	}
	void speedUp(int increase) {
		this->speed += increase;
	}
	void speedDown(int decrease) {
		this->speed -= decrease;
	}
	void print() const{
		cout << "속도 : " << speed << " 기어 : " << gear << " 색상 : " << color << endl;
	}
};
class SportsCar :public Car {
private:
	bool turbo;
public:
	void setTurbo(bool turbo)		//터보모드 설정함수
	{
		this->turbo = turbo;
	}
};

int main(void)
{
	SportsCar c1;
	c1.color = "Red";
	c1.gear = 1;
	c1.speed = 0;
	c1.setTurbo(true);
	c1.print();
	
	return 0;
}