//������
// ���� ����ȯ�� ���� ����ȯ
#include<iostream>
#include<string>
using namespace std;

class Shape {		//������ ��Ÿ���� �θ�Ŭ����
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
	Shape* ps = new Rectangle();		//���� �� ��ȯ
	ps->setOrigin(10, 10);
	ps->draw();
	((Rectangle*)ps)->setWidth(100);	//Rectangle�� setWidthȣ��
	((Rectangle*)ps)->draw();
	Rectangle* pr = (Rectangle*)(new Shape());
	pr->setWidth(100);
	pr->setHeight(100);
	pr->draw();
	delete ps;
	
	return 0;
}