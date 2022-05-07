#include<iostream>
#include<string>
using namespace std;

class Shape {
private:
	int x, y;
public:
	Shape();
	Shape(int x, int y);
	~Shape();
};

Shape::Shape() {
	cout << "Shape 持失切" << endl;
}
Shape::Shape(int x, int y) :x(x), y(y) {
	cout << "Shape 持失切  x(x), y(y)" << endl;
}
Shape::~Shape() {
	cout << "Shape 社瑚切" << endl;
}

class Rectangle :public Shape {
private:
	int width, height;
public:
	Rectangle(int x, int y, int width, int height);
	~Rectangle() {
		cout << "Rectanle  社瑚切()" << endl;
	}
};

Rectangle::Rectangle(int x, int y, int width, int height)\
	:Shape(x, y) {
	this->width = width;
	this->height = height;
	cout << "Rectangle 持失切 (x, y, width, height)" << endl;
}

int main(void)
{
	Rectangle r(0, 0, 100, 100);
	return 0;
}