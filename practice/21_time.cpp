#include<iostream>
#include<string>
using namespace std;

class Time {
private:
	int hour;
	int min;
	int sec;
public:
	Time();
	Time(int hour);
	Time(int hour, int min);
	Time(int hour, int min, int sec);
	void set_time(int hour, int min, int sec);
	void print();
};

Time::Time() {
	set_time(0, 0, 0);
}
Time::Time(int hour)
{
	set_time(hour, 0, 0);
}
Time::Time(int hour, int min)
{
	set_time(hour, min, 0);
}
Time::Time(int hour, int min, int sec)
{
	set_time(hour, min, sec);
}
void Time::set_time(int hour, int min, int sec)
{
	this->hour = ((0<=hour and hour<24) ? hour :0);
	this->min = ((0 <= min and min < 60) ? min : 0);
	this->sec = ((0 <= sec and sec < 60) ? sec : 0);
}
void Time::print()
{
	cout<< hour << "½Ã " << min << "ºÐ " << sec << "ÃÊ " << endl;
}

int main(void)
{
	Time t1;
	t1.print();
	Time t2(12);
	t2.print();
	Time t3(12, 12);
	t3.print();
	Time t4(12, 12, 12);
	t4.print();
	Time t5(40, 40, 213);
	t5.print();

	return 0;
}