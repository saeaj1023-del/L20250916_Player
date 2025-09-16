#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

int main()
{
	int PlayerX = 1;
	int PlayerY = 1;
	char PlayerShape = 'P';

	int Map[10][10] = {
		{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
	};

	while (true)
	{
		int KeyCode = _getch();

		if (KeyCode == 'w')
		{
			PlayerY--;
		}
		else if (KeyCode == 's')
		{
			PlayerY++;
		}
		else if (KeyCode == 'a')
		{
			PlayerX--;
		}
		else if (KeyCode == 'd')
		{
			PlayerX++;
		}

		system("cls");

		// Y가 10보다 작을 때까지 반복
		for (int Y = 0; Y < 10; ++Y)
		{
			for (int X = 0; X < 10; ++X)
			{
				// 플레이어의 좌표가 같은지 확인
				if (PlayerX == X && PlayerY == Y)
				{
					cout << PlayerShape;
				}
				else if (Map[Y][X] == 0)
				{
					//0을 공백으로 만들기
					cout << ' ';
				}
				
				else if (Map[Y][X] == 1)
				{
					//1을 *로 만들기
					cout << '*';
				}
			}
			cout << '\n';
		}
	}
}