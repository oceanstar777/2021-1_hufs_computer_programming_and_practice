//������ ��������� ȣ��
#include<iostream>
#include<string>
using namespace std;

class Car {
private:
	int speed;
	int gear;
	string color;
public:
	Car(int speed, int gear, string color):speed(speed),gear(gear),color(color)
	{
		cout << "������ ȣ��" << endl;
	}
	Car(const Car& obj) :speed(obj.speed), gear(obj.gear), color(obj.color)
	{
		cout << "���� ������ ȣ��" << endl;
	}
	void print();
	int get_speed(void)
	{
		return speed;
	}
};

void Car::print() {
	cout << "�ӵ� : " << speed << endl;
	cout << "��� : " << gear << endl;
	cout << "���� : " << color << endl;
}
void is_moving(Car obj) {
	if (obj.get_speed() > 0) {
		cout << "�����̰� �ֽ��ϴ�." << endl;
	}
	else {
		cout << "������ �ֽ��ϴ�." << endl;
	}
}


int main(void)
{
	Car c1(0, 1, "yellow");
	is_moving(c1);

	return 0;
}