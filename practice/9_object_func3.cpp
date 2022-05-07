//객체의 포인터가 함수의 매개변수로 전달되는 경우
//객체의 포인터 전달시에는 객체의 원본이 전달되므로
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
		speed(speed),gear(gear),color(color){}
	void print()
	{
		cout << "속도 : " << speed << " 기어 : " << gear << " 색상 : " << color << endl;
	}
};

void swapObjects(Car* p1, Car* p2)
{
	Car tmp;

	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

int main(void)
{
	Car red(0, 1, "Red");
	Car blue(1, 2, "Blue");
	cout << "변경 전" << endl;
	red.print();
	blue.print();
	swapObjects(&red, &blue);
	red.print();
	blue.print();

	return 0;
}