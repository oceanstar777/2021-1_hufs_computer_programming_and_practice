#include<iostream>
#include<string>
using namespace std;

class Car {
private:
	//������� ����
	int speed;	//�ӵ�
	int gear;	//���
	string color;	//����
public:
	//������
	int getSpeed() {
		return speed;
	}
	//������
	void setSpeed(int speed) {
		this->speed = speed;
	}
	//������
	int getGear() {
		return gear;
	}
	//������
	void setGear(int gear) {
		this->gear = gear;
	}
	//������
	string getColor() {
		return color;
	}
	//������
	void setColor(string color) {
		this->color = color;
	}
	void show() {
		cout << "�� ���� ���� : " << color << endl;
		cout << "�� ���� �ӵ� : " << speed << endl;
		cout << "�� ���� ��� : " << gear << endl;
	}
};

int main(void)
{
	Car* mycar = new Car;
	mycar->setSpeed(100);
	mycar->setGear(3);
	mycar->setColor("red");
	mycar->show();
	
	delete mycar;
	return 0;
	
}