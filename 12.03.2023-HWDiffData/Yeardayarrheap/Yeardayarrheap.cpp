#include <iostream>
#include <time.h>
using namespace std;
#pragma region Task1
//int leap(int YS, int YF);
//int days(int day_F, int day_S, int month_F, int month_S, int year_F, int year_S)
//{
//	int year{}, month{}, result{};
//	int month_list[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	int month_for_one{}, month_for_sec{};
//	for (size_t i = 0; i < month_F; i++)
//	{
//		month_for_one += month_list[i];
//	}
//	month_for_one -= month_list[month_F - 1] - day_F;
//	for (size_t i = 0; i < month_S; i++)
//	{
//		month_for_sec += month_list[i];
//	}
//	month_for_sec -= month_list[month_S - 1] - day_S;
//	if (month_for_one > month_for_sec) month = month_for_one - month_for_sec;
//	else if (month_for_sec > month_for_one) month = month_for_sec - month_for_one;
//	if (year_F >= year_S)
//	{
//		year = year_F - year_S;
//		year *= 365;
//		year += leap(year_S, year_F);
//	}
//	else if (year_S >= year_F)
//	{
//		year = year_S - year_F;
//		year *= 365;
//		year += leap(year_S, year_F);
//	}
//	result = year + month;
//	return result;
//}
//int main()
//{
//	int year_one{}, year_second{}, day_one{}, day_second{}, month_one{}, month_second{};
//	cout << "Enter your first data\tDay: ";
//	cin >> day_one;
//	cout << "Enter your first data\tMonth: ";
//	cin >> month_one;
//	cout << "Enter your first data\tYear: ";
//	cin >> year_one;
//	cout << "Enter your second data\tDay: ";
//	cin >> day_second;
//	cout << "Enter your second data\tMonth: ";
//	cin >> month_second;
//	cout << "Enter your second data\tYear: ";
//	cin >> year_second;
//	cout << "Difference in days: " << days(day_one, day_second, month_one, month_second, year_one, year_second);
//	return 0;
//}
//int leap(int YS, int YF)
//{
//	int years{};
//	for (size_t i = YF; i < YS; i++)
//	{
//		if (i % 4 == 0) years += 1;
//	}
//	return years;
//}
#pragma endregion
#pragma region Task2
//int* create(int length)
//{
//	srand(time(0));
//	int* arr = new int[length] {};
//	for (size_t i = 0; i < length; i++)
//	{
//		arr[i] = 1 + rand() % 100;
//		
//	}
//	return arr;
//}
//int average(int length)
//{
//	int res{};
//	int* arr = create(length);
//	for (size_t i = 0; i < length; i++)
//	{
//		res += arr[i];
//	}
//	res /= length;
//	return res;
//}
//int main() {
//	int num{};
//	cout << "Length of the arr: " << endl;
//	cin >> num;
//	int* res = create(num);
//	for (size_t i = 0; i < num; i++)
//	{
//		cout << res[i] << " ";
//	}
//	cout << endl << "Average is: " << average(num);
//	return 0;
//}
#pragma endregion
#pragma region Task3
//int* create(int length)
//{
//	srand(time(0));
//	int* arr = new int[length] {};
//	for (size_t i = 0; i < length; i++)
//	{
//		arr[i] = -10 + rand() % 30;
//
//	}
//	return arr;
//}
//int* dif(int length)
//{
//	int* res = create(length);
//	int* MxMnOz = new int [3] {};
//	for (size_t i = 0; i < length; i++)
//	{
//		if (res[i] > 0) MxMnOz[0]++;
//		else if (res[i] < 0) MxMnOz[1]++;
//		else MxMnOz[2]++;
//	}
//	return MxMnOz;
//}
//int main() {
//	int num{};
//	cout << "Length of the arr: " << endl;
//	cin >> num;
//	int* res = create(num);
//	int* total = dif(num);
//	for (size_t i = 0; i < num; i++)
//	{
//		cout << res[i] << " ";
//	}
//	cout << endl;
//	for (size_t i = 0; i < 3; i++)
//	{
//		if (i == 0) cout << "Max number: " << total[i] << endl;
//		if (i == 1) cout << "Min number: " << total[i] << endl;
//		if (i == 2) cout << "Zero number: " << total[i] << endl;
//	}
//	return 0;
//}
#pragma endregion
