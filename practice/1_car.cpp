#include<iostream>
#include<string>
using namespace std;

class Car
{
public:	//������� ����
	int speed;	//�ӵ�
	int gear;	//���
	string color;	//����
	//����Լ� ����
	void speed_up() {
		speed += 10;
	}
	void speed_down() {
		speed -= 10;
	}
	void show() {
		cout << "=============" << endl;
		cout << "�ӵ� : " << speed << endl;
		cout << "��� : " << gear << endl;
		cout << "���� : " << color << endl;
		cout << "=============" << endl;
	}

};
int main(void)
{
	Car* dyncar = new Car;	//��ü ��������
	
	dyncar->speed = 100;
	dyncar->gear = 2;
	dyncar->color = "Green";
	dyncar->show();

	delete dyncar;
	return 0;
}