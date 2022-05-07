//���԰���
//�ϳ��� ��ü�ȿ� �ٸ� ��ü���� ���Եȴ�
//�ϳ��� ��ü�ȿ� ��ü���� �����Ѵ�.

#include<iostream>
#include<string>
using namespace std;

class Time {
private:
	int hour;	//�ð�
	int min;	//��
	int sec;	//��
public:
	Time();		//����Ʈ ������
	Time(int hour, int minute, int sec);		//������
	void print();
};

Time::Time() {
	this->hour = 0;
	this->min = 0;
	this->sec = 0;
}

Time::Time(int hour, int min, int sec) {
	this->hour = hour;
	this->min = min;
	this->sec = sec;
}
void Time::print() {
	cout << hour << "�� " << min << "�� " << sec << "��" << endl;
}

class AlarmClock {
private:
	Time currentTime;		//����ð�
	Time alarmTime;			//�˶��ð�
public:
	AlarmClock(Time a, Time b);		//������
	void print();					//��ü�������
};
AlarmClock::AlarmClock(Time currentTime, Time AlarmTime) {	//������
	this->currentTime = currentTime;		//��ü�� ������ ����ȴ�
	this->alarmTime = AlarmTime;
}
void AlarmClock::print() {
	cout << "���� �ð� : ";
	currentTime.print();
	cout << "�˶� �ð� : ";
	alarmTime.print();
}


int main(void)
{
	Time current(12, 56, 34);
	Time alarm(6, 0, 0);
	AlarmClock ac(current, alarm);
	ac.print();

	return 0;
}