//묵시적 복사생성자 호출
#include<iostream>
#include<string>
using namespace std;

class Car {
private:
	int speed;
	int gear;
	string color;
public:
	Car(int speed, int gear, string color):speed(speed),gear(gear),color(color)
	{
		cout << "생성자 호출" << endl;
	}
	Car(const Car& obj) :speed(obj.speed), gear(obj.gear), color(obj.color)
	{
		cout << "복사 생성자 호출" << endl;
	}
	void print();
	int get_speed(void)
	{
		return speed;
	}
};

void Car::print() {
	cout << "속도 : " << speed << endl;
	cout << "기어 : " << gear << endl;
	cout << "색상 : " << color << endl;
}
void is_moving(Car obj) {
	if (obj.get_speed() > 0) {
		cout << "움직이고 있습니다." << endl;
	}
	else {
		cout << "정지해 있습니다." << endl;
	}
}


int main(void)
{
	Car c1(0, 1, "yellow");
	is_moving(c1);

	return 0;
}