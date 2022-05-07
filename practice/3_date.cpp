#include<iostream>
#include<string>
using namespace std;

class Date {
public:
	void print_date() {
		cout << year << "." << month << "." << day << endl;
	}
	int return_day() {
		return day;
	}

	int year;
	string month;
	int day;
};

int main(void)
{
	Date Mydate;
	Mydate.year = 2021;
	Mydate.month = "Nov";
	Mydate.day = 30;

	Mydate.print_date();

	cout << Mydate.return_day() << endl;

	return 0;

}