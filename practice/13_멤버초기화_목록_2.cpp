//����ʱ�ȭ ����� �ݵ�� ����ؾ��ϴ°��
//2. ����� �������� ���

#include<iostream>
#include<string>
using namespace std;

class Car {
private:
	string& alias;
	int speed;		//�ӵ�
public:
	Car(string s): alias(s)
	{
		cout << alias << endl;
	}

};




int main(void)
{
	Car c1("���� �ڵ���");
}