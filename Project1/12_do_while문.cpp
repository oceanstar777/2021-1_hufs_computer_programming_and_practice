//반복을 이용한 게임 프로그램
#include<iostream>

using namespace std;

int main(void)
{
	int answer = 59;	//정답
	int guess;
	int tries = 0;

	do {				//선 수행
		cout << "정답을 추측하여 보세요 : ";
		cin >> guess;
		tries++;

		if (guess > answer)		//사용자가 입력한 정수가 정답보다 높으면
			cout << "제시한 정수가 높습니다." << endl;
		else if (guess < answer)
			cout << "제시한 정수가 낮습니다." << endl;
	} while (guess != answer);		//후 점검
	cout << "축하합니다. 시도 횟수 = " << tries << endl;
	
	return 0;
}