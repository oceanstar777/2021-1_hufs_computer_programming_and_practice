//��ӽ� �����ڿ� �Ҹ����� ȣ�����
#include<iostream>
#include<string>
using namespace std;

class Shape {
private:
	int x, y;
public:
	Shape() {
		cout << "�θ� Ŭ���� ������" << endl;
	}
	~Shape() {
		cout << "�θ� Ŭ���� �Ҹ���" << endl;
	}
};

class Rectangle : public Shape {
private:
	int width, height;
public:
	Rectangle() {
		cout << "�ڽ� Ŭ���� ������" << endl;
	}
	~Rectangle() {
		cout << "�ڽ� Ŭ���� �Ҹ���" << endl;
	}
};

int main(void)
{
	Rectangle r1;
	
	return 0;
}