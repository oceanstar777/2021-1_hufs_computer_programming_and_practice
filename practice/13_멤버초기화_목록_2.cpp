//멤버초기화 목록을 반드시 사용해야하는경우
//2. 멤버가 참조자인 경우

#include<iostream>
#include<string>
using namespace std;

class Car {
private:
	string& alias;
	int speed;		//속도
public:
	Car(string s): alias(s)
	{
		cout << alias << endl;
	}

};




int main(void)
{
	Car c1("꿈의 자동차");
}