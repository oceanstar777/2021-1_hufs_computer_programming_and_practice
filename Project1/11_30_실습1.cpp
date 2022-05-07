#include <iostream>
#include <string>
using namespace std;
class Person {
private:
	string name;
	string mobile;
	string* email;
	int age;
public:
	Person(string name, string mobile, string email, int age);
	string getName();
	void setName(string name);
	string getMobile();
	void setMobile(string mobile);
	string getEmail();
	void setEmail(string email);
	int getAge();
	void setAge(int age);
	void printStr();
	~Person();
	Person(const Person& obj);
};
Person::Person(string name, string mobile, string email, int age)
{
	this->email = new string(mobile);	//set을 쓸경우에도 new string으로 임시객체 만들기
	this->name = name;
	this->mobile = mobile;
	this->age = age;
}
string Person::getName()
{
	return name;
}
void Person::setName(string name)
{
	this->name = name;
}
string Person::getMobile()
{
	return mobile;
}
void Person::setMobile(string mobile)
{
	this->mobile = mobile;
}
string Person::getEmail()
{
	return *email;
}
void Person::setEmail(string email)
{
	*this->email = email;
}
int Person::getAge()
{
	return age;
}
void Person::setAge(int age)
{
	this->age = age;
}
void Person::printStr() {
	cout << name << ' ' << mobile << ' ' << *email << ' ' << age << endl;
}
Person::Person(const Person& obj)
{
	this->name = obj.name;
	this->mobile = obj.mobile;
	this->email = new string(*(obj.email));
	this->age = obj.age;
}
Person::~Person() {
	delete email;
}
int main() {
	Person* a = new Person("누구야", "01012345678", "secured8372@gmail.com", 20);
	Person* b = new Person(*a);

	cout << endl;
	a->printStr();
	b->printStr();
	a->setEmail("123123@123123.123");
	cout << "a->setEmail 후:" << endl;
	a->printStr();
	b->printStr();
	return 0;
}