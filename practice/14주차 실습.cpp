#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

class Triangle {
private:
    double a;
    double b;
    double c;
public:
    void setA(double);
    void setB(double);
    void setC(double);
    double size();
};

void Triangle::setA(double a) { this->a = a; }
void Triangle::setB(double b) { this->b = b; }
void Triangle::setC(double c) { this->c = c; }
double Triangle::size() {
    double s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}
bool comp(Triangle a, Triangle b) {
    return a.size() > b.size();
}

int main() {
    int SIZE;
    cin >> SIZE;
    Triangle* pt = new Triangle[SIZE];
    double a, b, c;
    for (int i = 0; i < SIZE; i++)
    {
        cin >> a >> b >> c;
        (pt+i)->setA(a);
        (pt+i)->setB(b);
        (pt+i)->setC(c);
    }
    sort(pt, pt + SIZE, comp);
    cout.setf(ios::fixed);
    cout << pt[0].size() << endl;
    delete[] pt;
    return 0;
}