//�Լ��� ��ü�� ��ȯ�ϴ� ���
//��ü�� ������ ����� ��, ������ ���޵��� �ʴ´�
#include<iostream>
#include<string>
using namespace std;

class Car {
private:
	int speed;
	int gear;
	string color;
public:
	Car(int speed = 0, int gear = 1, string color = "White") :\
		speed(speed), gear(gear), color(color) {}
	void print() {
		cout << "�ӵ� : " << speed << " ��� : " << gear << " ���� : " << color << endl;
	}
};

Car createCar()
{
	Car tmp(100, 4, "Metal");
	return tmp;		//��ü�� ��ȯ�� ���� ��ü�� ������ ���� �� ��
					//������ ���޵��� ����
}

int main(void)
{
	Car c;
	c.print();
	c = createCar();
	c.print();

	return 0;
}


