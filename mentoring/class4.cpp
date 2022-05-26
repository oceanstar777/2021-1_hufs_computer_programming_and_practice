#include<iostream>
#include<string>
using namespace std;

class Car {
public:
	string kind = "벤츠";
	string color = "흰색";
	int zeroback = 3;
	void set_speed(int speed);	//미리선언 후 밖에서도 작성가능
	void set_speed(double speed) {
		this->speed = (int)speed;
	}// 중복함수도 사용가능
	int get_speed() {
		return speed;
	}
	int get_zeroback();
private:
	int speed = 0;
};

int Car::get_zeroback() {
	return zeroback;
};
void Car::set_speed(int speed) {
	if (speed < 0)
		this->speed = 0;		//잘못된 입력방지 가능
	else
		this->speed = speed;	//this = 파이썬의 self와 같은 것
}

int main(void)
{
	Car car;
	int speed;
	cin >> speed;	//속도입력
	cout << car.get_speed() << endl;
	car.set_speed(speed);
	cout << car.get_speed() << endl;

	return 0;
}