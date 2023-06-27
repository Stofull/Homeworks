#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
void getClick(int& x, int& y)
{
	HANDLE hConsoleIn = GetStdHandle(STD_INPUT_HANDLE);
	INPUT_RECORD inputRec;
	DWORD events;
	COORD coord;
	bool clicked = false;
	DWORD fdwMode = ENABLE_EXTENDED_FLAGS | ENABLE_WINDOW_INPUT | ENABLE_MOUSE_INPUT;
	SetConsoleMode(hConsoleIn, fdwMode);
	while (!clicked) 
	{
		ReadConsoleInput(hConsoleIn, &inputRec, 1, &events);
		if (inputRec.EventType == MOUSE_EVENT) {
			if (inputRec.Event.MouseEvent.dwButtonState == FROM_LEFT_1ST_BUTTON_PRESSED)
			{
				coord = inputRec.Event.MouseEvent.dwMousePosition;
				//printf("Clicked at (%d, %d)\n", coord.X, coord.Y);
				x = coord.X;
				y = coord.Y;
				clicked = true;
			}
		}
		if (GetAsyncKeyState(VK_ESCAPE)) {
			cout << "Exiting" << endl;
			break;
		}
	}
}
class Student
{
private:
	string name;
	int age;
public:
    Student() : name(""), age(0) {}
    Student(string name, int age) : name(name), age(age) {}
	string getName()
	{
		return name;
	}
	friend ostream& operator<<(ostream& os, const Student& student)
	{
		os << "Student name: " << student.name << "\nStudent age: " << student.age << endl;
		return os;
	}
};
class Aspirant : public Student
{
private:
	int x;
	int y;
public:
	Aspirant(string name, int age, int x, int y) : Student(name, age), x(x), y(y) {}

	void knows(int x, int y)
	{
		if (x % 8 != 0) x--;
		if (y == 0)
		{
			switch (x)
			{
			case 0:

				system("cls");
				cout << "Solve the equation: 2x + 5 = 17." << endl;
				cout << "Choose an answer\nA)6\nB)4\nC)7\n";
				getClick(x, y);
				if (y == 2)cout << "Congratulations, "<< getName() <<" you passed your exam!" << endl;
				else cout << getName()<<" you failed your exam!" << endl;
				break;
			case 8:
				system("cls");
				cout << "Calculate the perimeter of a rectangle with sides 6 cm and 8 cm." << endl;
				cout << "Choose an answer\nA)28\nB)14\nC)30\n" << endl;
				getClick(x, y);
				if (y == 3)cout << "Congratulations, "<< getName() <<" you passed your exam!" << endl;
				else cout << getName()<<" you failed your exam!" << endl;
				break;
			case 16:
				system("cls");
				cout << "Calculate the value of the expression: 2 * (16 + 9)." << endl;
				cout << "Choose an answer\nA)50\nB)100\nC)0\n" << endl;
				getClick(x, y);
				if (y== 3)cout << "Congratulations, "<< getName() <<" you passed your exam!" << endl;
				else cout << getName()<<" you failed your exam!" << endl;
				break;
			case 24:
				system("cls");
				cout << "How many degrees are in a right angle?" << endl;
				cout << "Choose an answer\nA)60\nB)120\nC)90\n" << endl;
				getClick(x, y);
				if (y== 4)cout << "Congratulations, "<< getName() <<" you passed your exam!" << endl;
				else cout << getName()<<" you failed your exam!" << endl;
				break;
			case 32:
				system("cls");
				cout << "If angle A is 45 degrees and angle B is 60 degrees, what is the sum of these angles?" << endl;
				cout << "Choose an answer\nA)60\nB)105\nC)100\n" << endl;
				getClick(x, y);
				if (y == 3)cout << "Congratulations, "<< getName() <<" you passed your exam!" << endl;
				else cout << getName()<<" you failed your exam!" << endl;
				break;
			case 40:
				system("cls");
				cout << "Solve the equation: 3x - 7 = 14." << endl;
				cout << "Choose an answer\nA)7\nB)6\nC)14\n" << endl;
				getClick(x, y);
				if (y==2)cout << "Congratulations, "<< getName() <<" you passed your exam!" << endl;
				else cout << getName()<<" you failed your exam!" << endl;
				break;
			case 48:
				system("cls");
				cout << "Find the sum of the first 5 even numbers." << endl;
				cout << "Choose an answer\nA)30\nB)25\nC)5\n" << endl;
				getClick(x, y);
				if (y== 2)cout << "Congratulations, "<< getName() <<" you passed your exam!" << endl;
				else cout << getName()<<" you failed your exam!" << endl;
				break;
			case 56:
				system("cls");
				cout << "Calculate the area of a rectangle with sides 12 cm and 8 cm." << endl;
				cout << "Choose an answer\nA)94\nB)96\nC)98\n" << endl;
				getClick(x, y);
				if (y== 3)cout << "Congratulations, "<< getName() <<" you passed your exam!" << endl;
				else cout << getName()<<" you failed your exam!" << endl;
				break;
			case 64:
				system("cls");
				cout << "How many meters in 1 kilometer?" << endl;
				cout << "Choose an answer\nA)10\nB)100\nC)1000\n" << endl;
				getClick(x, y);
				if (y== 4)cout << "Congratulations, "<< getName() <<" you passed your exam!" << endl;
				else cout << getName()<<" you failed your exam!" << endl;
				break;
			case 72:
				system("cls");
				cout << "Solve the equation: 2(x + 3) = 10." << endl;
				cout << "Choose an answer\nA)3\nB)6\nC)10\n" << endl;
				getClick(x, y);
				if (y== 2)cout << "Congratulations, "<< getName() <<" you passed your exam!" << endl;
				else cout << getName()<<" you failed your exam!" << endl;
				break;
			case 27:break;
			default: cout << "Unknown number"; break;
			}
		}
		else if (y == 1)
		{
			switch (x)
			{
			case 0: 
				system("cls");
				cout << "Calculate the root of the number 144." << endl;
				cout << "Choose an answer\nA)12\nB)1\nC)11\n" << endl;
				getClick(x, y);
				if (y == 2)cout << "Congratulations, "<< getName() <<" you passed your exam!" << endl;
				else cout << getName()<<" you failed your exam!" << endl;
				break;
			case 8:
				system("cls");
				cout << "Calculate the area of a square with a side of 9 cm." << endl;
				cout << "Choose an answer\nA)3\nB)6\nC)9\n" << endl;
				getClick(x, y);
				if (y== 4)cout << "Congratulations, "<< getName() <<" you passed your exam!" << endl;
				else cout << getName()<<" you failed your exam!" << endl;
				break;
			case 16:
				system("cls");
				cout << "Calculate the value of the expression: 2^(4 + 3)." << endl;
				cout << "Choose an answer\nA)49\nB)128\nC)7\n" << endl;
				getClick(x, y);
				if (y== 4)cout << "Congratulations, "<< getName() <<" you passed your exam!" << endl;
				else cout << getName()<<" you failed your exam!" << endl;
				break;
			case 24: 
				system("cls");
				cout << "Calculate the volume of a rectangular parallelepiped with sides 6 cm, 4 cm and 5 cm." << endl;
				cout << "Choose an answer\nA)100\nB)120\nC)140\n" << endl;
				getClick(x, y);
				if (y== 3)cout << "Congratulations, "<< getName() <<" you passed your exam!" << endl;
				else cout << getName()<<" you failed your exam!" << endl;
				break;
			case 32: 
				system("cls");
				cout << "Calculate the area of an isosceles triangle with a base of 10 cm and a height of 8 cm." << endl;
				cout << "Choose an answer\nA)40\nB)60\nC)80\n" << endl;
				getClick(x, y);
				if (y== 3)cout << "Congratulations, "<< getName() <<" you passed your exam!" << endl;
				else cout << getName()<<" you failed your exam!" << endl;
				break;
			case 40: 
				system("cls");
				cout << "Find the sum of the first 10 natural numbers." << endl;
				cout << "Choose an answer\nA)10\nB)30\nC)55\n" << endl;
				getClick(x, y);
				if (y== 4)cout << "Congratulations, "<< getName() <<" you passed your exam!" << endl;
				else cout << getName()<<" you failed your exam!" << endl;
				break;
			case 48:
				system("cls");
				cout << "How many minutes are in 2 hours?" << endl;
				cout << "Choose an answer\nA)60\nB)240\nC)120\n" << endl;
				getClick(x, y);
				if (y== 4)cout << "Congratulations, "<< getName() <<" you passed your exam!" << endl;
				else cout << getName()<<" you failed your exam!" << endl;
				break;
			case 56:
				system("cls");
				cout << "Solve the equation: 5x + 2 = 3x + 12." << endl;
				cout << "Choose an answer\nA)5\nB)10\nC)1\n" << endl;
				getClick(x, y);
				if (y== 2)cout << "Congratulations, "<< getName() <<" you passed your exam!" << endl;
				else cout << getName()<<" you failed your exam!" << endl;
				break;
			case 64: 
				system("cls");
				cout << "Solve the equation: 2x - 5 = 9 + x." << endl;
				cout << "Choose an answer\nA)7\nB)14\nC)10\n" << endl;
				getClick(x, y);
				if (y== 3)cout << "Congratulations, "<< getName() <<" you passed your exam!" << endl;
				else cout << getName()<<" you failed your exam!" << endl;
				break;
			case 72: 
				system("cls");
				cout << "Find the arithmetic mean of the numbers 2, 4, 6, 8, 10." << endl;
				cout << "Choose an answer\nA)3\nB)6\nC)2\n" << endl;
				getClick(x, y);
				if (y== 3)cout << "Congratulations, "<< getName() <<" you passed your exam!" << endl;
				else cout << getName()<<" you failed your exam!" << endl;
				break;
			case 27:break;
			default: cout << "Unknown number"; break;
			}
		}
	}
};
int main()
{
	int x, y;
	size_t i = 0;
	for (; i < 10; i++) cout << i + 1 << "\t";
	cout << endl;
	for (; i < 20; i++) cout << i + 1 << "\t";
	cout << endl;
	getClick(x, y);
	cout << "Choose an exam ticket";
	cout << endl;
	Aspirant tmp("Alex", 22, x, y);
	tmp.knows(x, y);
	return 0;
}
