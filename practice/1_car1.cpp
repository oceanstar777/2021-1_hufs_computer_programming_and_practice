#include<iostream>
#include<string>
using namespace std;

class Car {
private:
	int speed;	//�ӵ�
	int gear;	//���
	string color;	//����
public:
	Car() {
		cout << "����Ʈ ������ ȣ��" << endl;
		speed = 0;
		gear = 1;
		color = "red";
	}
};


int main(void)
{
	Car c1;
	return 0;
}