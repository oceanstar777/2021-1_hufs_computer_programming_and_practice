#include<iostream>
#include<string>
using namespace std;

class Shape {
protected:
	int x, y;
public:
	virtual void draw() const{
		cout << "Shape draw" << endl;
	}
	void setOrigin(int x, int y) {
		this->x = x;
		this->y = y;
	}
};

class Rectangle :public Shape {
private:
	int width, height;

public:
	void setWidth(int width) { this->width = width; }
	void setHeight(int height) { this->height = height; }
	virtual void draw() const {
		cout << "Rectangle draw" << endl;
	}
};

class Circle : public Shape {
private:
	int radius;
public:
	void setRadius(int radius) { this->radius = radius; }
	virtual void draw() const { cout << "Circle draw" << endl; }
};

class Triangle : public Shape {
private:
	int base, height;
public:
	virtual void draw() const {
		cout << "Triangle draw" << endl;
	}
};

int main(void)
{
	Shape* arr[3];

	arr[0] = new Rectangle();
	arr[1] = new Circle();
	arr[2] = new Triangle();
	for (int i = 0; i < 3 ; i++)
	{
		arr[i]->draw();
	}

}