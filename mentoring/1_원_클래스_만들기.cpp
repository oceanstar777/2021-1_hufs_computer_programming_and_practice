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
    void setX(double x);
    double getY();
    void setY(double y);
    double getRadius();
    void setRadius(double radius);
    double area();
    bool is_overlap(Circle*B);
};

double Circle::getX()
{
    return x;
}
void Circle::setX(double x)
{
    this->x = x;
}
double Circle::getY()
{
    return y;
}
void Circle::setY(double y)
{
    this->y = y;
}
double Circle::getRadius()
{
    return radius;
}
void Circle::setRadius(double radius)
{
    this->radius = radius;
}
double Circle::area()
{
    return PI * pow(radius,2);
}

bool Circle::is_overlap(Circle* B)
{
    double result = sqrt(pow((B->getX() - x), 2) + pow((B->getY() - y), 2));

    if (result <= (radius + B->getRadius()))
    {
        return true;
    }
    else
    {
        return false;
    }
}





int main() { // 클래스만 구현하면 main수정 필요 없음
    double x, y, radius;
    Circle* A = new Circle;
    Circle* B = new Circle;

    cin >> x;
    cin >> y;
    cin >> radius;
    A->setX(x);
    A->setY(y);
    A->setRadius(radius);
    cin >> x;
    cin >> y;
    cin >> radius;
    B->setX(x);
    B->setY(y);
    B->setRadius(radius);

    printf("원 A (%lf, %lf), 반지름 %lf, 넓이 %lf\n",
        A->getX(), A->getY(), A->getRadius(), A->area());
    printf("원 B (%lf, %lf), 반지름 %lf, 넓이 %lf\n",
        B->getX(), B->getY(), B->getRadius(), B->area());
    if (A->is_overlap(B))
        printf("두 원은 접점이 있습니다.\n");
    else
        printf("두 원은 접점이 없습니다.\n");
}