//��ü�� �Լ��� �Ű������� ���޵Ǵ� ���
//�Լ��� ���ڼ��� �Ű������� ����, �μ��� ��ü�� ���� ��������
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
		speed(speed), gear(gear), color(color){}
	void print() {
		cout << "�ӵ� : " << speed << " ��� : " << gear << " ���� : " << color << endl;
	}
};

void swapObject(Car c1, Car c2)
{
	Car tmp;
	tmp;
	c1 = c2;
	c2 = tmp;
}

int main(void)
{
	Car red(0, 1, "Red");
	Car blue(30, 2, "Blue");
	
	swapObject(red, blue);
	red.print();
	blue.print();
	return 0;
}
// ���� ������� �ʴ´� call by value�̱� ����
