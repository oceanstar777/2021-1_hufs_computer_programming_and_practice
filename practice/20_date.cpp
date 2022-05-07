#include<iostream>
#include<string>
using namespace std;

class Date {
private:
	int year;
	int month;
	int day;
public:
	Date();
	Date(int year);
	Date(int year, int month, int day);
	void setDate(int year, int month, int day);
	void print();
};

Date::Date(void)	//디폴트 생성자
{
	year = 2010;
	month = 1;
	day = 1;
}
Date::Date(int year)
{
	setDate(year, 1, 1);
}
Date::Date(int year, int month, int day)
{
	setDate(year, month, day);
}
void Date::setDate(int year, int month, int day)
{
	this->year = year;
	this->month = month;
	this->day = day;
}

void Date::print()
{
	cout << year << "년 " << month << "월 " << day << "일 " << endl;
}

int main(void)
{
	Date date1;	//매개변수 없음
	date1.print();
	Date date2(2011);	//매개변수 하나
	date2.print();
	Date date3(2021, 11, 25);	//매개변수 세개
	date3.print();
	return 0;
}