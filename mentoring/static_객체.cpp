#include<iostream>
#include<string>

using namespace std;

class human {
private:
	static int population;
	const string birth_day = "1¿ù 1ÀÏ";
	int resident_num;

public:
	human() {
		population += 1;
	}

	string get_birth_day() {
		return birth_day;
	}
	int get_resident_num() {
		return resident_num;
	}
	static int get_population() {
		return population;
	}
};
int human::population = 0;
int main(void)
{
	human h1;
	cout << h1.get_population() << endl;
	human h2;
	cout << h2.get_population() << endl;
}