//�Ҹ���
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

class Car {
private:
	int speed;	// �ӵ�
	int gear;	//���
	char* color;	//����
public:
	//������
	Car(int speed, int gear,char* c)
	{
		cout << "������ ȣ��" << endl;
		this->speed = speed;
		this->gear = gear;
		color = new char[strlen(c) + 1];
		strcpy(color, c);
	}
	~Car() {
		cout << "�Ҹ��� ȣ��" << endl;
		delete[] color;
	}
};

int main(void)
{
	Car c(0, 1, "yellow");

	return 0;
}