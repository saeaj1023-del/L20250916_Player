#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

int main()
{
	int PlayerX = 0;
	int PlayerY = 0;

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

	cout << "P" << endl;

	return 0;
}