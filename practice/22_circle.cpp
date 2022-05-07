#include<iostream>
#include<string>
using namespace std;

class Point {
private:
	int x;
	int y;
public:
	Point();
	Point(int x, int y);
	void print();
};
Point::Point() {
	x = 0;
	y = 0;
}
Point::Point(int x, int y):x(x),y(y)
{}
void Point::print() {
	cout << "x : " << x << " y : " << y << endl;
}

class Circle {
private:
	int radius;
	Point center;
public:
	Circle();
	Circle(int radius);
	Circle(Point center, int radius);
	Circle(int x, int y, int radius);
	void print();
};

Circle::Circle() :radius(0), center(0, 0) {}
Circle::Circle(int radius):radius(radius){}
Circle::Circle(Point center,int radius):center(center),radius(radius){}
Circle::Circle(int x, int y , int radius):center(x,y),radius(radius){}
void Circle::print()
{
	center.print();
	cout << "¹ÝÁö¸§ : " << radius << endl << endl;
}

int main(void)
{
	Point p(5, 3);
	Circle c1;
	Circle c2(3);
	Circle c3(p, 4);
	Circle c4(9, 7, 5);
	c1.print();
	c2.print();
	c3.print();
	c4.print();

	return 0;
}