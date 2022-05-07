//멤버 초기화목록을 반드시 사용해야 하는 경우
//멤버가 객체인 경우
#include<iostream>
#include<string>
using namespace std;

class Point {
private:
	int x, y;
public:
	Point(int a, int b)
	{
		x = a;
		y = b;
	}
	int get_x(void) {
		return x;
	}
	int get_y(void) {
		return y;
	}

};

class Rectangle {
private:
	Point p1, p2;
public:
	Rectangle(int x1, int y1, int x2, int y2) :p1(x1, y1), p2(x2, y2) {
	}
	void print() {
		cout << p1.get_x() << endl;
		cout << p1.get_y() << endl;
		cout << p2.get_x() << endl;
		cout << p2.get_y() << endl;
	}
};

int main(void)
{
	Rectangle r1(10, 10, 100, 100);
	r1.print();

}