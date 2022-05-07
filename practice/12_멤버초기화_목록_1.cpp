//멤버 초기화 목록을 반드시 사용해야하는 경우
//1. 멤버가 상수인 경우
#include<iostream>
#include<string>
using namespace std;

class car {
private:
	const int MAX_SPEED;
	int speed;	//속도
public:
	car() :MAX_SPEED(300)
	{}
	void print() {
		cout << MAX_SPEED << endl;
	}
};

int main(void)
{
	car c1;
	c1.print();
}