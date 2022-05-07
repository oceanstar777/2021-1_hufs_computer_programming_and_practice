//����Լ��� const�� ���̴� ���
//�� �Լ��� ���Ͽ� ��� ������ ������ �� ���ٴ� �ǹ�
//const�� �ٴ� �Լ��� �������Լ� ��� �Ѵ�
//��� ����Լ����� ��������� ���� �����Ϸ��� �ϸ� ������ �߻��Ѵ�
//�������Լ� �ȿ��� ���ȭ���� �����Լ��� ȣ���ϸ� ������ �߻��Ѵ�(���� ���ɼ� ����)
//�������� ��쿡�� const�� ���̴����� �ٶ����ϴ�

#include<iostream>
#include<string>
using namespace std;

class Car {
private:
	const int serial;
	int speed;
	int gear;
	string color;

public:
	Car(int serial, int speed, int gear, string color);
	void displaySpeed() const;
};

Car::Car(int serial = 1, int speed = 0, int gear = 1, string color = "white") :\
serial(serial), speed(speed),gear(gear),color(color){}

void Car::displaySpeed() const{
	//this->speed = 0; ����! �������Լ��� ��������� ���� �����Ҽ� ����
	cout << "�ӵ� " << speed << endl;
}

int main(void)
{
	Car c1(1, 100, 4, "Blue");
	c1.displaySpeed();

	return 0;
}