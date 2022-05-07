//��������� const�� ���̴� ���
//��������� const�� ������ ����� �ȴ�.
//�������� ���� ��������� ����� �ٲٴ°� ����

#include<iostream>
#include<string>
using namespace std;

class Car {
private:
	const int serial;	//��� ��� ����
	int speed;
	int gear;
	string color;
	
public:
	Car(int serial, int speed, int gear, string color);
	void print();
};

Car::Car(int serial = 0, int speed =0, int gear = 1, string color ="White") :\
serial(serial),speed(speed),gear(gear),color(color){}
void Car::print()
{
	cout << "��ȣ : " << serial << " �ӵ� : " << speed << " ��� : " << gear << " ���� : " << color << endl;
}
int main(void)
{
	Car c1(1, 0, 1, "White");
	Car c2(2, 0, 1, "Red");
	Car c3(3, 0, 1, "Blue");
	Car c4(4);
	c1.print();
	c2.print();
	c3.print();
	c4.print();
	return 0;
}