#include<iostream>
#include<string>

using namespace std;

class human {
private:
	string birth_day = "1�� 1��";
	int resident_num;

public:
	void set_birth_day(string birth_day) {
		this->birth_day = birth_day;
	}
	string get_birth_day() const{		//�Լ��������� ���� �������� �ʴ� �Լ�
		return birth_day;
	}
};

int main(void)
{
	human a;
	a.set_birth_day("1�� 2��");
	cout << a.get_birth_day() << endl;
}