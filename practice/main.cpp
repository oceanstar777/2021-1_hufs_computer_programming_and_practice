#include "car.h"

int main(void)
{
	Car mycar;
	mycar.setSpeed(100);
	mycar.setGear(2);
	mycar.setColor("Green");

	cout << "���� �ӵ� : " << mycar.getSpeed() << endl;
	cout << "���� ��� : " << mycar.getGear() << endl;
	cout << "���� : " << mycar.getColor() << endl;
	return 0;
}