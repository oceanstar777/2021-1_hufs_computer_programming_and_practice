#include<iostream>
using namespace std;
#define size 3

void print(int board[][size]);
bool check(int x, int y, int board[][size]);
bool winner(int board[][size]);
int main(void)
{
	int board[size][size] = {
		{0,0,0},
		{0,0,0},
		{0,0,0}
	};

	int x, y;
	int round = 1,user = 0;

	while (true)
	{
		if ((round % 2) == 1)
			user = 1;
		else
			user = 2;

		print(board);
		cout << user << "�� ���� �� ���� �Է��ϼ��� (�� ��) : ";
		cin >> x >> y;
		if (!check(x-1,y-1, board))
		{
			cout << "�ٽ� �Է��ϼ���" << endl;
			continue;
		}
		else
		{
			board[x-1][y-1] = user;
		}
		if (winner(board))
		{
			print(board);
			cout << user << "�� ���� �¸�" << endl;
			break;
		}
		round++;
		if (round == 10) {
			print(board);
			cout << "���º�" << endl;
			break;
		}
	}
}


void print(int board[][size])
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (board[i][j] == 0)
				cout << " |";
			else if (board[i][j] == 1)
				cout << "O|";
			else
				cout << "X|";
		}
		cout << endl;
	}
	return;
}
bool check(int x, int y, int board[][size])
{
	if (((x < 0) || (x > size)))
		return false;
	if (board[x][y] != 0)
		return false;
	return true;
}

bool winner(int board[][size])
{
	for (int i = 0; i < size; i++)
	{
		if (board[i][0] != 0) {
			if ((board[i][0] == board[i][1]) && (board[i][1] == board[i][2]))
				return true;
		}
	}
	
	for (int j = 0; j < size; j++)
	{
		if (board[0][j] != 0) 
		{
			if ((board[0][j] == board[1][j]) && (board[1][j] == board[2][j]))
				return true;
		}
	}
	
	if (board[0][0] != 0) {
		if ((board[0][0] == board[1][1]) && (board[1][1] == board[2][2]))
			return true;
			}

	if (board[0][2] != 0) {
		if ((board[0][2] == board[1][1]) && (board[1][1] == board[2][0]))
			return true;
	}

	return false;
}
