//가상함수
#include<iostream>
#include<string>
using namespace std;

class Shape {
protected:
	int x, y;
public:
	void setOrigin(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
	virtual void draw() const{
		cout << "Shape Draw" << endl;
	}
};

class Rectangle :public Shape {
private:
	int width, height;
public:
	void setWidth(int width) { this->width = width; }
	void setHeight(int height) { this->height = height; }
	void draw() const { cout << "Rectangle draw" << endl; }
};

class Circle :public Shape {
private:
	int radius;
public:
	void setRadius(int radius) { this->radius = radius; }
	void draw() const { cout << "Circle draw" << endl; }
};

int main(void)
{
	Shape* ps = new Rectangle();
	ps->draw();
	delete ps;
	Shape* ps1 = new Circle();
	ps1->draw();
	delete ps1;

	return 0;
}