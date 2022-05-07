#include<iostream>
#include<string>
using namespace std;

class Car {
private:
	int speed;
	int gear;
	string color;
public:
	Car(int speed, int gear, string color) :\
		speed(speed), gear(gear), color(color){}
	void print() {
		cout << "�ӵ� : " << speed << " ��� : " << gear << " ���� : " << color << endl;
	}
};

int main(void)
{
	Car c1(0, 1, "White");
	Car c2(0, 2, "Red");
	c1.print();
	c2.print();
	c1 = c2;
	cout << "���� �� " << endl;
	c1.print();
	c2.print();

	return 0;
}