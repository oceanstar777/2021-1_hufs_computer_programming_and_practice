//��ü��const�� ���̴� ���
//��ü�� const�� �ٴ´ٸ� �� ��ü�� ���ؼ��� ��������� ���� ������ �� ����
//����Լ��� ��쿡�� ������ �Լ��� �ƴϸ� ȣ�� �� �� ����.
#include<iostream>
#include<string>
using namespace std;
class Car {
private:
	int speed;
	int gear;
	string color;
public:
	Car(int speed, int gear, string color):speed(speed),gear(gear),color(color){}
	void setSpeed(int speed)
	{
		this->speed = speed;
	}
};




int main(void)
{
	const Car c1(0, 1, "yellow");
	//c1.setSpeed(3);// const�� ������ ��ü�� ���� ������� ���� �Ұ�


	return 0;
}