//다중상속
#include<iostream>
#include<string>
using namespace std;

class PassangerCar {
public:
	int seats;	//정원
	void set_seats(int seats) { this->seats = seats; }
};

class Truck {
public:
	int payload;	//적재하중
	void set_payload(int payload) { this->payload = payload; }
};

class Pickup :public PassangerCar, public Truck
{
public:
	int tow_capability;	//견인능력
	void set_tow(int tow) { tow_capability = tow; }
	void print() {
		cout << "정원 : " << seats << endl;
		cout << "적재하중 : " << payload << endl;
		cout << "견인능력 : " << tow_capability << endl;
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