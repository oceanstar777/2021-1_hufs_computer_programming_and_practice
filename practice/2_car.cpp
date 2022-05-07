//this포인터의 사용
#include<iostream>
#include<string>
using namespace std;

class Car {
private:
	int speed;	//속도
	int gear;	//기어
	string* color;	//색상
public:
	Car(int s, int g, string c);
	~Car();
	int getSpeed();
	void setSpeed(int speed);
	void print();
	void isFaster(Car* p);
	Car(const Car& obj);
};

Car::Car(int s = 0, int g = 1, string c = "White")
{	
	this->speed = s;
	this->gear = g;
	this->color = new string(c);
}
Car::~Car() {
	delete color;
}
Car::Car(const Car& obj) {
	this->speed = obj.speed;
	this->gear = obj.gear;
	this->color = new string(*(obj.color));
}
int Car::getSpeed() {
	return speed;
}
void Car::setSpeed(int speed) {
	this->speed = speed;
}
void Car::print() {
	cout << "속도 : " << speed << " 기어 :" << gear << " 색상 : " << *color << endl;
}
void Car::isFaster(Car* p) {
	if (this->getSpeed() < p->getSpeed()) {
		cout << "Car2가 더 빠릅니다" << endl;
	}
	else {
		cout << "Car1이 더 빠릅니다" << endl;
	}
}
int main(void)
{
	Car* c1 = new Car(100, 5, "Black");
	Car* c3 = new Car(150, 2, "Blue");
	Car* c2 = new Car(*c3);
	
	c1->print();
	c2->print();
	c1->isFaster(c2);
	delete c1, c2,c3;

	return 0;
}