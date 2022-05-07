#include<iostream>
#include<string>
using namespace std;

class Book {
private:
	string name;
	string author;
	int price;
	int rating;
public:
	void setName(string name);
	void setPrice(int price);
	void setRating(int rating);
	void setAuthor(string author);
	void showinfo();
};

void Book::setName(string name)
{
	this->name = name;
}
void Book::setPrice(int price)
{
	if ((price < 0)) {
		this->price = 0;
	}
	else {
		this->price = price;
	}
}
void Book::setRating(int rating)
{
	if (rating < 0) {
		this->rating = 0;
	}
	else if (rating > 100) {
		this->rating = 100;
	}
	else {
		this->rating = rating;
	}
}
void Book::setAuthor(string author)
{
	this->author = author;
}
void Book::showinfo() {
	cout << "평점 " << rating << "점, " << author << "의 " << name << ", " << price << "에 판매중!" << endl;
}

int main(void)
{
	Book b;
	string name;
	string author;
	int price;
	int rating;
	cin >> name >> author >> price >> rating;
	b.setAuthor(author);
	b.setName(name);
	b.setPrice(price);
	b.setRating(rating);
	b.showinfo();
}