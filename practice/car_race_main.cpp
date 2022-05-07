#include "car_race.h"

int main(void)
{
	Car car1, car2;
	car1.init(0, 1, "red");
	car2.init(0, 1, "Blue");

	srand((unsigned)time(NULL));

	int speed_up1 = rand() % 10;
	int speed_up2 = rand() % 10;
	int speed_down1 = rand() % 10;
	int speed_down2 = rand() % 10;

	for (int i = 0; i < speed_up1; i++)
	{
		car1.speed_up();
	}

	for (int i = 0; i < speed_down1; i++)
	{
		car1.speed_down();
	}
	for (int i = 0; i < speed_up2; i++)
	{
		car2.speed_up();
	}
	for (int i = 0; i < speed_down2; i++)
	{
		car2.speed_down();
	}
	car1.show();
	car2.show();

	if (car1.get_speed() < car2.get_speed())
	{
		cout << "car2 ½Â¸®" << endl;
	}
	else if (car1.get_speed() > car2.get_speed())
	{
		cout << "car1 ½Â¸®" << endl;
	}
	else {
		cout << "ºñ±è" << endl;
	}
}