#include<iostream>
#include<string>
using namespace std;

class Product {
protected:
	string name;
	int price;
public:
	virtual int getPrice() const{
		return price;
	}
	void setPrice(int price);
	void print() const;
	string getName() const;
	Product(string name, int price);
};

void Product::setPrice(int price) {
	this->price = price;
}
void Product::print(void) const {
	cout << "��ǰ�� : " << name << endl;
	cout << "���� : " << price <<"��"<< endl;
}
string Product::getName(void) const{
	return name;
}
Product::Product(string name = "None", int price = 0) {
	this->name = name;
	this->price = price;
}
