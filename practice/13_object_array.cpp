//객체배열
#include<iostream>
#include<string>
using namespace std;

class Car {
private:
	int speed;
	int gear;
	string color;
public:
	Car(int speed = 0, int gear = 1, string color = "White"):\
		speed(speed),gear(gear),color(color){}
	void print()
	{
		cout << "속도 : " << speed << " 기어 : " << gear << " 색상 : " << color << endl;
	}
};

int main(void)
{
	Car objArray[3] = {
		Car(0,1,"White"),
		Car(0,1,"Red"),
		Car(0,1,"Blue")
	};
	for (int i = 0; i < 3; i++)
	{
		objArray[i].print();
	}
	return 0;
}