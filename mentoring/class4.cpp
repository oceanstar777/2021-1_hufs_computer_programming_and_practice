#include<iostream>
#include<string>
using namespace std;

class Car {
public:
	string kind = "����";
	string color = "���";
	int zeroback = 3;
	void set_speed(int speed);	//�̸����� �� �ۿ����� �ۼ�����
	void set_speed(double speed) {
		this->speed = (int)speed;
	}// �ߺ��Լ��� ��밡��
	int get_speed() {
		return speed;
	}
	int get_zeroback();
private:
	int speed = 0;
};

int Car::get_zeroback() {
	return zeroback;
};
void Car::set_speed(int speed) {
	if (speed < 0)
		this->speed = 0;		//�߸��� �Է¹��� ����
	else
		this->speed = speed;	//this = ���̽��� self�� ���� ��
}

int main(void)
{
	Car car;
	int speed;
	cin >> speed;	//�ӵ��Է�
	cout << car.get_speed() << endl;
	car.set_speed(speed);
	cout << car.get_speed() << endl;

	return 0;
}