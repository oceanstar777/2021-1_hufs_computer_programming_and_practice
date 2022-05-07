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
	void print()
	{
		cout << "속도 : " << speed << " 기어 : " << gear << " 색상 : " << color << endl;
	}
};

int main(void)
{
	Car objArray[3] = {
		Car(0,1,"White"),
		Car(0,1,"Blue"),
		Car(0,1,"Red")
	};
	Car* p = objArray;
	for (int i = 0; i < 3; i++)
	{
		(p + i)->print();
	}

	return 0;
}