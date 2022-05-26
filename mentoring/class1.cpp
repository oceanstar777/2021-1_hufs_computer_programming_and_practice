#include<iostream>
#include<string>
using namespace std;
class Car {
public:			//public 멤버 : 외부에서도 요소에 접근가능 
	string kind = "벤츠";
	int zeroback = 3;
	string color = "흰색";
	int speed = 0;

	void speed_up() {
		speed += 10;
	}
	void speed_down() {
		speed -= 10;
	}
};


int main(void)
{
	Car* car = new Car;	//동적할당 가능
	cout << (*car).kind << endl;	//이렇게도 가능
	car->speed_up();		//멤버함수를 통해 변경
	cout << car->speed << endl;
	delete car;
	return 0;
}