//상속 protected 접근지정자
#include<iostream>
#include<string>
using namespace std;

class Employee {
private:
	int rrn;		//주민등록번호
protected:
	int salary;		//월급
public:
	string name;
	void setSalary(int salary);
	int getSalary();
};
void Employee::setSalary(int salary = 0) {
	this->salary = salary;
}

int Employee::getSalary() {
	return salary;
}

class Manager :public Employee {
private:
	int bonus;
public:
	Manager(int bouns);
	void modify(int salary, int bonus);
	void display();
};

Manager::Manager(int bonus = 0) {
	this->bonus = bonus;
}
void Manager::modify(int salary, int bonus) {
	this->salary = salary;
	this->bonus = bonus;
}
void Manager::display() {
	cout << "월급 : " << salary << " 보너스 : " << bonus << endl;
}

int main(void)
{
	
	Manager m(100);
	m.setSalary(1000); m.display();
	m.modify(200, 300);
	m.display();
	return 0;
}