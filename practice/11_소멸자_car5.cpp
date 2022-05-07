//소멸자
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

class Car {
private:
	int speed;	// 속도
	int gear;	//기어
	char* color;	//색상
public:
	//생성자
	Car(int speed, int gear,char* c)
	{
		cout << "생성자 호출" << endl;
		this->speed = speed;
		this->gear = gear;
		color = new char[strlen(c) + 1];
		strcpy(color, c);
	}
	~Car() {
		cout << "소멸자 호출" << endl;
		delete[] color;
	}
};

int main(void)
{
	Car c(0, 1, "yellow");

	return 0;
}