#include<iostream>
#include<string>
using namespace std;

class Date {
private:
	int year;
	int month;
	int date;
public:
	int getYear();
	void setYear(int year);
	int getMonth();
	void setMonth(int month);
	int getDate();
	void setDate(int date);
};

int Date::getYear() {
	return year;
}

void Date::setYear(int year) {
	this->year = year;
}

void Date::setMonth(int month) {
	this->month = month;
}

int Date::getMonth() {
	return month;
}

void Date::setDate(int date) {
	this->date = date;
}

int Date::getDate() {
	return date;
}


int main(void)
{
	Date* d = new Date;
	d->setYear(2021);
	d->setMonth(11);
	d->setDate(23);
	cout << d->getYear() << "." << d->getMonth() << "." << d->getDate() << endl;

	delete d;

	return 0;
}