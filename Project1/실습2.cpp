#include <iostream>
#include <cmath>
using namespace std;

class Triangle {
private:
    double a;
    double b;
    double c;
public:
    double size();
    Triangle(double a, double b, double c);
};
Triangle::Triangle(double a, double b, double c)
{
    this->a = a;
    this->b = b;
    this->c = c;
}

double Triangle::size() {
    double s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    Triangle t(a, b, c);
    cout << t.size() << endl;
    return 0;
}