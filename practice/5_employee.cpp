#include<iostream>
#include<string>
using namespace std;

class Employee{
private:
	string name;
	int salary;
	int age;
	int getSalary() {
		return salary;
	}
public:
	int getAge() { return age; }
	string getName() { return name; }
};

int main(void)
{
	Employee e;
	e.salary = 300;	//¿À·ù!
	e.age = 26;
	int sa = e.getSalary();

	string s = e.getName();
	int a = e.getAge();
	return 0;
}