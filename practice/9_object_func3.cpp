//��ü�� �����Ͱ� �Լ��� �Ű������� ���޵Ǵ� ���
//��ü�� ������ ���޽ÿ��� ��ü�� ������ ���޵ǹǷ�
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
		speed(speed),gear(gear),color(color){}
	void print()
	{
		cout << "�ӵ� : " << speed << " ��� : " << gear << " ���� : " << color << endl;
	}
};

void swapObjects(Car* p1, Car* p2)
{
	Car tmp;

	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

int main(void)
{
	Car red(0, 1, "Red");
	Car blue(1, 2, "Blue");
	cout << "���� ��" << endl;
	red.print();
	blue.print();
	swapObjects(&red, &blue);
	red.print();
	blue.print();

	return 0;
}