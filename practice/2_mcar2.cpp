#include<iostream>
#include<string>
using namespace std;

class Car {
private:
	int speed;	//속도
	int gear;	//기어
	string color;	//색상

public:
	Car(int s, int g, string c)
	{
		speed = s;
		gear = g;
		color = c;
	}
	void print() {
		cout << "=========" << endl;
		cout << "속도 : " << speed << endl;
		cout << "기어 : " << gear << endl;
		cout << "색상 : " << color << endl;
		cout << "========" << endl;
	}
};




int main(void)
{
	Car c1(0, 1, "blue");
	Car c2(0, 1, "red");
	c1.print();
	c2.print();

	return 0;
}