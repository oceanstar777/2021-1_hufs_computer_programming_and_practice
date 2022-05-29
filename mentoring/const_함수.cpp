#include<iostream>
#include<string>

using namespace std;

class human {
private:
	string birth_day = "1월 1일";
	int resident_num;

public:
	void set_birth_day(string birth_day) {
		this->birth_day = birth_day;
	}
	string get_birth_day() const{		//함수에붙으면 값을 변경하지 않는 함수
		return birth_day;
	}
};

int main(void)
{
	human a;
	a.set_birth_day("1월 2일");
	cout << a.get_birth_day() << endl;
}