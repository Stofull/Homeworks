#include <iostream>
#include <time.h>
using namespace std;
#pragma region Task1
//void sort(int str[])
//{
//	int tmp{};
//	for (size_t i = 0; i < 10 - 1; i++)
//	{
//		for (size_t j = 0; j < 10 - i - 1; j++)
//		{
//			if (str[j] > str[j + 1])
//			{
//				tmp = str[j];
//				str[j] = str[j + 1];
//				str[j + 1] = tmp;
//
//			}
//		}
//	}
//}
//int binar(int str[], int number, int left, int right)
//{
//	int middle = left + (right - left) / 2;
//	if (str[middle] == number)
//	{
//		return middle;
//	}
//	else if (str[middle] > number)
//	{
//		return binar(str, number, left, middle - 1);
//	}
//	else
//		return binar(str, number, middle + 1, right);
//}
//int main()
//{
//	srand(time(0));
//	int array[10]{};
//	for (size_t i = 0; i < 10; i++)
//	{
//		array[i] = 1 + rand() % 100;
//	}
//	sort(array);
//	for (size_t i = 0; i < 10; i++)
//	{
//		cout << array[i] << " ";
//	}
//	int num{};
//	cout << endl << "Enter your number: ";
//	cin >> num;
//	int result = binar(array, num, 0, 10 - 1) + 1;
//	cout << "Your number is at index number: " << result;
//	return 0;
//}
#pragma endregion
#pragma region Task2
void right(int str[5][5], int num)
{
	int tmp[5][5]{};
	int k = 0;
	for (size_t i = 0; i < 5; i++)
	{
		k = 0;
		for (size_t j = num; j < 5; j++)
		{
			tmp[i][k] = str[i][j];
			k++;
		}
	}
	for (size_t i = 0; i < 5; i++)
	{
		k = 0;
		for (size_t j = 5-num; j < 5; j++)
		{
			tmp[i][j] = str[i][k];
			k++;
		}
	}
	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j < 5; j++)
		{
			str[i][j] = tmp[i][j];
		}
	}
}
int main()
{
	srand(time(0));
	int array[5][5]{};
	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j < 5; j++)
		{
			array[i][j] = 1 + rand() % 30;
		}
	}
	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j < 5; j++)
		{
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
	int number{};
	cout << "Enter your number: ";
	cin >> number;
	right(array, number);
	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j < 5; j++)
		{
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
#pragma endregion