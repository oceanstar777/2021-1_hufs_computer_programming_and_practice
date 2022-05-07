//상속시 생성자와 소멸자의 호출순서
#include<iostream>
#include<string>
using namespace std;

class Shape {
private:
	int x, y;
public:
	Shape() {
		cout << "부모 클래스 생성자" << endl;
	}
	~Shape() {
		cout << "부모 클래스 소멸자" << endl;
	}
};

class Rectangle : public Shape {
private:
	int width, height;
public:
	Rectangle() {
		cout << "자식 클래스 생성자" << endl;
	}
	~Rectangle() {
		cout << "자식 클래스 소멸자" << endl;
	}
};

int main(void)
{
	Rectangle r1;
	
	return 0;
}