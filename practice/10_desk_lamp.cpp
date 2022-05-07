#include<iostream>
#include<string>
using namespace std;

class Desk_lamp {
private:
	bool isOn;
public:
	void turnoff(void);
	void turnon(void);
	void print(void);
};

void Desk_lamp::turnoff(void) {
	isOn = false;
}
void Desk_lamp::turnon(void) {
	isOn = true;
}
void Desk_lamp::print(void)
{
	cout << "·¥ÇÁ°¡ " << (isOn == true ? "ÄÑÁü" : "²¨Áü") << endl;
}


int main(void)
{
	Desk_lamp d;
	d.turnoff();
	d.print();
	d.turnon();
	d.print();

	return 0;
}