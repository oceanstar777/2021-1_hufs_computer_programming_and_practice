//�ӽð�ü ����
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
		cout << "�ӵ� : " << speed << " ��� : " << gear;
		cout << " ���� : " << color << endl;
	}

};

Car createCar() {
	Car tmp(0, 1, "Metal");
	return tmp;		//����� �ӽð�ü ��ȯ
}

int main(void)
{
	createCar().print();		//�ӽð�ü�� ���Ͽ� print()ȣ��
	return 0;
}
