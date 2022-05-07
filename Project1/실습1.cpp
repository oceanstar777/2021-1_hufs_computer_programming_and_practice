#include <iostream>
#include <cmath>
#define PI 3.14
using namespace std;

class Circle {
private:
    double x;
    double y;
    double radius;
public:
    double getX();
    double getY();
    double getRadius();
    void setX(double);
    void setY(double);
    void setRadius(double);
    double area();
    bool is_overlap(Circle*);
    Circle(double x, double y, double radius);
};
Circle::Circle(double x, double y, double radius)
{
    this->x = x;
    this->y = y;
    this->radius = radius;
}

double Circle::getX() { return x; }
double Circle::getY() { return y; }
double Circle::getRadius() { return radius; }
void Circle::setX(double n) { x = n; }
void Circle::setY(double n) { y = n; }
void Circle::setRadius(double r) { radius = r; }
double Circle::area() { return radius * radius * 3.14; }
bool Circle::is_overlap(Circle* c) {
    double distance = sqrt(pow(x - c->x, 2) + pow(y - c->y, 2));
    return distance <= radius + c->radius;
}

int main() { // Ŭ������ �����ϸ� main���� �ʿ� ����
    double x, y, radius;

    cin >> x >> y >> radius;
    Circle* A = new Circle(x, y, radius);
    cin >> x >> y >> radius;
    Circle* B = new Circle(x, y, radius);

    printf("�� A (%lf, %lf), ������ %lf, ���� %lf\n",
        A->getX(), A->getY(), A->getRadius(), A->area());
    printf("�� B (%lf, %lf), ������ %lf, ���� %lf\n",
        B->getX(), B->getY(), B->getRadius(), B->area());
    if (A->is_overlap(B))
        printf("�� ���� ������ �ֽ��ϴ�.\n");
    else
        printf("�� ���� ������ �����ϴ�.\n");
}