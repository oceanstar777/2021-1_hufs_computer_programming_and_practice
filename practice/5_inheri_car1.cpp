//재정의
#include<iostream>
#include<string>
using namespace std;

class Car {
public:
	int getHP() {
		return 100;	//100마력 반환
	}
};
class SportsCar :public Car {
public:
	int getHP() {
		return 300;	//300마력반환
	}
};

int main(void)
{
	SportsCar sc;
	cout << "마력 : " << sc.getHP() << endl;
	cout << "마력 : " << sc.Car::getHP() << endl;

	return 0;
}