#include <iostream>
#include <time.h>
using namespace std;
#pragma region Task1
//template <typename T>
//T arr(const T length)
//{
//	int arr[4][4]{};
//	for (size_t i = 0; i < length; i++)
//	{
//		for (size_t j = 0; j < length; j++)
//		{
//			arr[i][j] = 1 + rand() % 20;
//		}
//	}
//	int min = arr[0][0], max = arr[0][0];
//	for (size_t i = 0; i < length; i++)
//	{
//		for (size_t j = 0; j < length; j++)
//		{
//			cout << arr[i][j] << "|\t";
//
//		}
//		cout << endl;
//	}
//	for (size_t i = 0; i < length; i++)
//	{
//		for (size_t j = 0; j < length; j++)
//		{
//			if (i == j && arr[i][j] < min) min = arr[i][j];
//			if (i == j && arr[i][j] > max) max = arr[i][j];
//		}
//	}
//	cout << "Max number is: " << max << endl;
//	cout << "Min number is: " << min << endl;
//
//	cout << "Sorted:\n";
//	for (size_t i = 0; i < length; ++i) {
//		for (size_t j = 0; j < length; ++j) {
//			for (size_t k = j + 1; k < length; ++k) {
//				if (arr[i][j] > arr[i][k]) {
//					int temp = arr[i][j];
//					arr[i][j] = arr[i][k];
//					arr[i][k] = temp;
//				}
//			}
//		}
//	}
//	for (size_t i = 0; i < length; i++)
//	{
//		for (size_t j = 0; j < length; j++)
//		{
//			cout << arr[i][j] << "|\t";
//		}
//		cout << endl;
//	}
//	return 0;
//}
//int main()
//{
//	const int length = 4;
//	cout << "For int: \n";
//	arr<int>(length);
//	//cout << "\nFor double: \n";
//	//arr<double>( length);
//	//cout << "\nFor float: \n";
//	//arr<float>( length);
//	return 0;
//}
#pragma endregion
#pragma region Task2
//int high(int first, int second)
//{
//	if (first > second) return high(first - second, second);
//	else if (second > first) return high(first, second - first);
//}
//int main()
//{
//	int num{}, number{};
//	cout << "Enter your first number: ";
//	cin >> num;
//	cout << "Enter your second number: ";
//	cin >> number;
//	cout << high(num, number);
//	return 0;
//}
#pragma endregion
#pragma region Task3
//int game(int num)
//{
//	srand(time(0));
//	if (num / 1000 == num / 100 % 10 || num / 1000 == num / 10 % 10 || num / 1000 == num % 10) return game(num + 1000);
//	else if (num / 100 % 10 == num / 10 % 10 || num / 100 % 10 == num % 10) return game(num + 100);
//	else if (num / 10 % 10 == num % 10) return game(num + 10);
//	if (num > 9999) return game(num - 999);
//	return num;
//}
//int main()
//{
//	srand(time(0));
//	int random = 1000 + rand() % 9999;
//	int rannum = game(random);
//	cout << rannum << endl;
//	int number{}, index{}, bull{}, cow{};
//	while (number != rannum)
//	{
//		cout << "enter a four digit number: ";
//		cin >> number;
//		if (number < 1000)
//		{
//			cout << "your number is not four digits: " << endl;
//			continue;
//		}
//		index++;
//		if (rannum / 1000 == number / 1000) bull++;
//		else if (rannum / 1000 == number / 100 % 10 || rannum / 1000 == number / 10 % 10 || rannum / 1000 == number % 10) cow++;
//		if (rannum / 100 % 10 == number / 100 % 10) bull++;
//		else if (rannum / 100 % 10 == number / 1000 || rannum / 100 % 10 == number / 10 % 10 || rannum / 100 % 10 == number % 10) cow++;
//		if (rannum / 10 % 10 == number / 10 % 10) bull++;
//		else if (rannum / 10 % 10 == number / 1000 || rannum / 10 % 10 == number / 100 % 10 || rannum / 10 % 10 == number % 10) cow++;
//		if (rannum % 10 == number % 10) bull++;
//		else if (rannum % 10 == number / 1000 || rannum % 10 == number / 100 % 10 || rannum % 10 == number / 10 % 10) cow++;
//		cout << "bull: " << bull << endl;
//		cout << "cow: " << cow << endl;
//		bull = 0;
//		cow = 0;
//		if (rannum == number)
//		{
//			cout << "\tyou win!" << endl;
//			cout << "\tnumber of attempts: " << index;
//			break;
//		}
//		else continue;
//		return 0;
//	}
//}
#pragma endregion
