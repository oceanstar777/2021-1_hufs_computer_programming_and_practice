#include<iostream>
#include<string>
using namespace std;

class Car {
private:
	int speed;	//�ӵ�
	int gear;	//���
	string color;	//����

public:
	Car();
};

Car::Car() {
	cout << "����Ʈ ������ ȣ��" << endl;
	speed = 0;
	gear = 1;
	color = "white";
}

int main(void)
{
	Car c1;

	return 0;
}