//������
#include<iostream>
#include<string>
using namespace std;

class Car {
public:
	int getHP() {
		return 100;	//100���� ��ȯ
	}
};
class SportsCar :public Car {
public:
	int getHP() {
		return 300;	//300���¹�ȯ
	}
};

int main(void)
{
	SportsCar sc;
	cout << "���� : " << sc.getHP() << endl;
	cout << "���� : " << sc.Car::getHP() << endl;

	return 0;
}