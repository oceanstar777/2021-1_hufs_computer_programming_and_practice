#include<iostream>
#include<string>

using namespace std;

class Product {
private:
	int id;
	string name;
	int price;
public:
	void input();
	void print();
	bool is_cheaper(Product other);
};

void Product::input() {
	cout << "��ǰ�� �ϷĹ�ȣ�� �Է��ϼ��� : ";
	cin >> id;
	cout << "��ǰ�� �̸��� �Է��ϼ��� : ";
	cin >> name;
	cout << "��ǰ�� ������ �Է��ϼ��� : ";
	cin >> price;
	return;
}
void Product::print() {
	cout << "�Ϸ� ��ȣ : " << id << endl;
	cout << "�̸� : " << name << endl;
	cout << "���� : " << price << endl;
	return;
}
bool Product::is_cheaper(Product other) {
	if (other.price < price) {
		return false;
	}
	else
		return true;
}

int main(void)
{
	Product p1, p2;
	p1.input();
	p2.input();

	if (p1.is_cheaper(p2)) {
		p1.print();
		cout << "�� �� �Դϴ�." << endl;
	}
	else
	{
		p2.print();
		cout << "�� �� �Դϴ�." << endl;
	}
	return 0;
}