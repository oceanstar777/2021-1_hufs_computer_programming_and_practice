//�����ڸ� ���� �� ��ȯ
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
	void print() {
		cout << "�ӵ� : " << speed;
		cout << " ��� : " << gear;
		cout << " ���� : " << color << endl;
	}
};

void swapObjects(Car& r1, Car& r2)
{
	Car tmp;
	
	tmp = r1;
	r1 = r2;
	r2 = tmp;
}

int main(void)
{
	Car red(0, 1, "red");
	Car blue(30, 2, "blue");
	red.print();
	blue.print();

	swapObjects(red, blue);
	red.print();
	blue.print();

	return 0;
}
