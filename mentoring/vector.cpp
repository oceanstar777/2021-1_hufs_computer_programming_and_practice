#include<iostream>
#include<vector>
using namespace std;

int main(void)
{
	vector<int> scores(10);
	for (int i = 1; i < 11; i++) {
		scores.push_back(i);
	}
	int temp;
	for (int i = 1; i < 11; i++) {
		temp = scores[i];
		scores.pop_back();
		cout << scores[i] << endl;
	}

}