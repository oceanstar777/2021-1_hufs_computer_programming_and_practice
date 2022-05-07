#include<iostream>
#include<string>
using namespace std;

class Car {
public:
	int speed;
	int gear;
	string color;

	void speed_up() {
		speed += 10;
	}
	void speed_down() {
		speed -= 10;
	}

	void show() {
		cout << "------------------" << endl;
		cout << speed << endl;
		cout << gear << endl;
		cout << color << endl;
		cout << "------------------" << endl;
	}

};

int main(void)
{
	Car* dyncar = new Car;
	dyncar->speed = 10;
	dyncar->gear = 3;
	dyncar->color = "orange";
	dyncar->speed_up();
	dyncar->show();
	
	delete dyncar;

	return 0;
}