#include<iostream>
#include<string>
using namespace std;

class Car {
private:
	int speed;	//�ӵ�
	int gear;	//���
	string color;	//����

public:
	Car(int s, int g, string c)
	{
		speed = s;
		gear = g;
		color = c;
	}
	void print() {
		cout << "=========" << endl;
		cout << "�ӵ� : " << speed << endl;
		cout << "��� : " << gear << endl;
		cout << "���� : " << color << endl;
		cout << "========" << endl;
	}
};




int main(void)
{
	Car c1(0, 1, "blue");
	Car c2(0, 1, "red");
	c1.print();
	c2.print();

	return 0;
}