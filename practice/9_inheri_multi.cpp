//���߻��
#include<iostream>
#include<string>
using namespace std;

class PassangerCar {
public:
	int seats;	//����
	void set_seats(int seats) { this->seats = seats; }
};

class Truck {
public:
	int payload;	//��������
	void set_payload(int payload) { this->payload = payload; }
};

class Pickup :public PassangerCar, public Truck
{
public:
	int tow_capability;	//���δɷ�
	void set_tow(int tow) { tow_capability = tow; }
	void print() {
		cout << "���� : " << seats << endl;
		cout << "�������� : " << payload << endl;
		cout << "���δɷ� : " << tow_capability << endl;
	}
};

int main(void)
{
	Pickup mycar;
	mycar.set_seats(4);
	mycar.set_payload(1000);
	mycar.set_tow(3);

	mycar.print();

	return 0;
}