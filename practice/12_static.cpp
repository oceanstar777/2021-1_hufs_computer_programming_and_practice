//���������� ����� ����
#include<iostream>
#include<string>
using namespace std;

class Car {
private:
	int speed;
	int gear;
	string color;
public:
	static int count;
	Car(int speed = 0, int gear = 1, string color = "White") :\
		speed(speed), gear(gear), color(color) 
	{
		count++;
	}
	~Car() {
		count--;
	}
	int SumCount() const{
		return count;
	}
};

int Car::count = 0;		//����������� �ʱ�ȭ

int main(void)
{
	cout << "������ �ڵ��� �� : " << Car::count << endl;
	Car c1, c2;
	cout << "������ �ڵ��� �� : " << Car::count << endl;
	Car c3;
	cout << "������ �ڵ��� �� : " << c3.SumCount() << endl;
}
