class Point {
private:
	double x, y;
public:
	Point(double x, double y) :x(x), y(y){}
	double getX() { return x; }
	double getY() { return y; }
	void setX(double x) { this->x = x; }
	void setY(double y) { this->y = y; }
	double distance_from_origin() {
		return sqrt(pow(x, 2) + pow(y, 2));
	}
};





class Circle {
private:
	Point center;
	double radius;
public:
	Circle(Point center, double radius);
	Point getCenter();
	double getRadius();
	void setCenter(Point center);
	double area();
};

Circle::Circle(Point center,double radius):center(center),radius(radius){}
Point Circle::getCenter() {
	return center;
}
double Circle::getRadius() {
	return radius;
}
void Circle::setCenter(Point center) {
	this->center = center;
}

double Circle::area() {
	return PI * pow(radius, 2);
}

