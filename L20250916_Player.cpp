#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;


int main()
{
	int PlayerX = 0;
	int PlayerY = 0;
	bool bIsRunning = true;

	int ObjectX[100];
	int ObjectY[100];
	char ObjectShape[100];

	int Object01X = 0;
	int Object01Y = 0;
	char Object01Shape = '/';

	int Object02X = 0;
	int Object02Y = 0;
	char Object02Shape = '?';

	int Object03X = 0;
	int Object03Y = 0;
	char Object03Shape = '#';

	int Object04X = 0;
	int Object04Y = 0;
	char Object04Shape = '%';

	//위치변경
	cout << Object01Shape << endl;
	cout << Object02Shape << endl;
	cout << Object03Shape << endl;
	cout << Object04Shape << endl;
	return 0;
}