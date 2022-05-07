#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string* regnum;
    int dis;
    int year;
    float speed;
public:
    string getRegnum() { return *regnum; }
    int getDis() { return dis; }
    int getYear() { return year; }
    float getSpeed() { return speed; }
    void setRegnum(string regnum) { this->regnum = new string(regnum); }
    void setDis(int dis) { this->dis = dis; }
    void setYear(int year) { this->year = year; }
    void setSpeed(float speed) { this->speed = speed; }
    Car(string _regnum, int dis, int year, double speed);
    ~Car();
};

Car::Car(string _regnum, int dis, int year, double speed) {
    this->regnum = new string(_regnum);
    this->dis = dis;
    this->year = year;
    this->speed = speed;
}
Car::~Car() {
    delete regnum;
}

int main() {
    string regnum;
    int Dis;
    int year;
    double speed;
    cin >> regnum >> Dis >> year >> speed;
    Car* myCar = new Car(regnum, Dis, year, speed);
    cout << myCar->getRegnum() << ' ' << myCar->getDis() << ' ' << myCar->getYear() << ' ' << myCar->getSpeed();
    delete myCar;
    return 0;
}