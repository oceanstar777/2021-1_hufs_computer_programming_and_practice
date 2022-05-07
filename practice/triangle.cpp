#include<iostream>
#include<string>
#include<cmath>
using namespace std;

class Triangle {
private:
	double a;
	double b;
	double c;
public:
	void setA(double a);
	void setB(double b);
	void setC(double c);
	double size();
};

void Triangle::setA(double a) {
	this->a = a;
}
void Triangle::setB(double b) {
	this->b = b;
}
void Triangle::setC(double c) {
	this->c = c;
}
double Triangle::size() {
	double s, S;

	s = (a + b + c) / 2;
	S = sqrt(s * (s - a) * (s - b) * (s - c));
	return S;
}

int main(void) {
	Triangle t;
	double a, b, c;
	cin >> a >> b >> c;
	t.setA(a);
	t.setB(b);
	t.setC(c);
	cout << t.size() << endl;
}