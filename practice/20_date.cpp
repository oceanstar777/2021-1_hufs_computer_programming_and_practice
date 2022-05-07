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

Date::Date(void)	//����Ʈ ������
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
	cout << year << "�� " << month << "�� " << day << "�� " << endl;
}

int main(void)
{
	Date date1;	//�Ű����� ����
	date1.print();
	Date date2(2011);	//�Ű����� �ϳ�
	date2.print();
	Date date3(2021, 11, 25);	//�Ű����� ����
	date3.print();
	return 0;
}