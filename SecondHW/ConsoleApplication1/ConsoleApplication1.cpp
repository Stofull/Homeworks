#include <iostream>
using namespace std;
int main()
{
#pragma region Task1
//	int time{};
//	cout << "Enter your seconds to convert: ";
//	cin >> time;
//	int TimeMinute = time / 60;
//	int TimeHour = time / 3600;
//	cout
//		<< "Minutes: " << TimeMinute << endl
//		<< "Hours: " << TimeHour << endl
//		<< "Seconds: " << time;
#pragma endregion
#pragma region Task2
//	float number{};
//	cout << "How much money do you have?" << endl;
//	cin >> number;
//	int dollar = number;
//	float cent = number - dollar;
//	cout
//		<< "Dollar = " << dollar << endl
//		<< "Cent = " << cent;
#pragma endregion
#pragma region Task3
	int days{};
	int week{};
	cout << "How many days do you have?" << endl;
	cin >> days;
	while (days > 7) {
		days -= 7;
		week += 1;
	}
	cout << "Weeks = " << week << endl << "Days = " << days;
#pragma endregion
}