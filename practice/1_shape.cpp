//다형성
// 상향 형변환과 하향 형변환
#include<iostream>
#include<string>
using namespace std;

class Shape {		//도형을 나타내는 부모클래스
protected:
	int x, y;
public:
	void draw() {
		cout << "Shape draw" << endl;
	}
	void setOrigin(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
};

class Rectangle : public Shape {
private:
	int width, height;
public:
	void setWidth(int width) { this->width = width; }
	void setHeight(int height) { this->height = height; }
	void draw() { cout << "Rectangle draw" << endl; }
	//over riding
};

class Circle :public Shape {
private:
	int radius;
public:
	void setRadius(int radius) { this->radius = radius; }
	void draw() { cout << "Circle draw" << endl; }
};

int main(void)
{
	Shape* ps = new Rectangle();		//상향 형 변환
	ps->setOrigin(10, 10);
	ps->draw();
	((Rectangle*)ps)->setWidth(100);	//Rectangle의 setWidth호출
	((Rectangle*)ps)->draw();
	Rectangle* pr = (Rectangle*)(new Shape());
	pr->setWidth(100);
	pr->setHeight(100);
	pr->draw();
	delete ps;
	
	return 0;
}