//정적변수의 선언과 생성
#include<iostream>
#include<string>
using namespace std;

class Car {
private:
	int speed;
	int gear;
	string color;
public:
	static int count;
	Car(int speed = 0, int gear = 1, string color = "White") :\
		speed(speed), gear(gear), color(color) 
	{
		count++;
	}
	~Car() {
		count--;
	}
	int SumCount() const{
		return count;
	}
};

int Car::count = 0;		//정적멤버변수 초기화

int main(void)
{
	cout << "생성된 자동차 수 : " << Car::count << endl;
	Car c1, c2;
	cout << "생성된 자동차 수 : " << Car::count << endl;
	Car c3;
	cout << "생성된 자동차 수 : " << c3.SumCount() << endl;
}
