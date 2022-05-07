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
	cout << "상품의 일렬번호를 입력하세요 : ";
	cin >> id;
	cout << "상품의 이름을 입력하세요 : ";
	cin >> name;
	cout << "상품의 가격을 입력하세요 : ";
	cin >> price;
	return;
}
void Product::print() {
	cout << "일렬 번호 : " << id << endl;
	cout << "이름 : " << name << endl;
	cout << "가격 : " << price << endl;
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
		cout << "이 더 쌉니다." << endl;
	}
	else
	{
		p2.print();
		cout << "이 더 쌉니다." << endl;
	}
	return 0;
}