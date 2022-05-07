//포함관계
//하나의 객체안에 다른 객체들이 포함된다
//하나의 객체안에 객체들을 포함한다.

#include<iostream>
#include<string>
using namespace std;

class Time {
private:
	int hour;	//시간
	int min;	//분
	int sec;	//초
public:
	Time();		//디폴트 생성자
	Time(int hour, int minute, int sec);		//생성자
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
	cout << hour << "시 " << min << "분 " << sec << "초" << endl;
}

class AlarmClock {
private:
	Time currentTime;		//현재시각
	Time alarmTime;			//알람시각
public:
	AlarmClock(Time a, Time b);		//생성자
	void print();					//객체정보출력
};
AlarmClock::AlarmClock(Time currentTime, Time AlarmTime) {	//생성자
	this->currentTime = currentTime;		//객체의 정보가 복사된다
	this->alarmTime = AlarmTime;
}
void AlarmClock::print() {
	cout << "현재 시각 : ";
	currentTime.print();
	cout << "알람 시각 : ";
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