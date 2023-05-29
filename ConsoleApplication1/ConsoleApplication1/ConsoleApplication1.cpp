#include <iostream> 
#include <windows.h> 
using namespace std;
int getClick(int& x)
{
	HANDLE hConsoleIn = GetStdHandle(STD_INPUT_HANDLE);
	INPUT_RECORD inputRec; // Структура для хранения событий 
	DWORD events; // Количество событий 
	ReadConsoleInput(hConsoleIn, &inputRec, 1, &events);
	x = inputRec.Event.KeyEvent.wVirtualKeyCode;
	return 0;
}

int main()
{
	int x{};
		while (x != 40)
		{
			getClick(x);
			cout << x << endl;

		}
	return 0;
}