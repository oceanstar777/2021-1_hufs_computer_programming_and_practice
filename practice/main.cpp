#include "car.h"

int main(void)
{
	Car mycar;
	mycar.setSpeed(100);
	mycar.setGear(2);
	mycar.setColor("Green");

	cout << "현재 속도 : " << mycar.getSpeed() << endl;
	cout << "현재 기어 : " << mycar.getGear() << endl;
	cout << "색상 : " << mycar.getColor() << endl;
	return 0;
}