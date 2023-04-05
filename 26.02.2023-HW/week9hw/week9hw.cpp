#include <iostream>
#include <time.h>
using namespace std;
int main()
{
#pragma region Task1
	//int numbers[20];
	//int min{}, max{};
	//srand(time(0));
	//cout << "Random numbers is : ";
	//for (size_t i = 0; i < 20; i++)
	//{
	//	numbers[i] = -50 + rand() % 100;
	//}
	//min = numbers[0];
	//max = numbers[0];
	//for (size_t i = 0; i < 20; i++)
	//{
	//	if (min > numbers[i]) min = numbers[i];
	//	if (max < numbers[i]) max = numbers[i];
	//	cout << numbers[i] << " ";
	//}
	//cout << endl << "Min num: " << min << endl << "Max num: " << max;
#pragma endregion
#pragma region Task2
	//int numbers[9];
	//int limit{}, amount{};
	//srand(time(0));
	//for (size_t i = 0; i < 9; i++)
	//{
	//	numbers[i] = 0 + rand() % 100;
	//	cout << numbers[i] << " ";
	//}
	//cout << endl << "Enter the number to which the count will be: ";
	//cin >> limit;
	//for (size_t i = 0; i < 9; i++)
	//{
	//	if (numbers[i] < limit) amount += numbers[i];
	//}
	//cout << endl << "Amount numbers less " << limit << " = " << amount;
#pragma endregion
#pragma region Task3
	//int month[12], salary{};
	//for (size_t i = 0; i < 12; i++)
	//{
	//	cout << "Enter salary for the " << i + 1 << "-th month: ";
	//	cin >> salary;
	//	month[i] = salary;
	//}
	//int range_start{}, range_end{};
	//int min_month = month[0], max_month = month[0];
	//cout << endl << "Enter start of range: ";
	//cin >> range_start;
	//cout << endl << "Enter end of range: ";
	//cin >> range_end;
	//for (size_t i = range_start; i < range_end; i++)
	//{
	//	if (max_month < month[i]) max_month = month[i];
	//	if (min_month > month[i]) min_month = month[i];
	//}
	//cout << endl << "Maximum salary for the period: " << max_month << endl << "Minimum salary for the period: " << min_month;
#pragma endregion
#pragma region Task4
	//int numbers[10];
	//int turn{}, result{}, index_min{}, index_max{}, max{}, min{}, index{};
	//srand(time(0));
	//cout << "Numbers is: ";
	//for (size_t i = 0; i < 10; i++)
	//{
	//	numbers[i] = -10 + rand() % 20;
	//	cout << numbers[i] << " ";
	//}
	//cout
	//	<< endl
	//	<< "1.Sum of negative numbers" << endl
	//	<< "2.Product of numbers between min and max numbers" << endl
	//	<< "3.Product of elements with even numbers" << endl
	//	<< "4.Sum of elements between minimum and negative numbers" << endl;
	//cin >> turn;
	//switch (turn)
	//{
	//case 1:
	//	for (size_t i = 0; i < 10; i++)
	//	{
	//		if (numbers[i] < 0) result += numbers[i];
	//	}
	//	cout << "Product of negative numbers: " << result;
	//	break;
	//case 2:
	//	++result;
	//	min == numbers[0];
	//	max == numbers[0];
	//	for (size_t i = 0; i < 10; i++)
	//	{
	//		if (min > numbers[i]) min = numbers[i], index_min = i;
	//		if (max < numbers[i]) max = numbers[i], index_max = i;
	//	}
	//	if (index_min > index_max) index = index_min, index_min = index_max + 1, index_max = index;
	//	for (size_t i = index_min; i < index_max; i++)
	//	{
	//		result *= numbers[i];
	//	}
	//	cout << "Product between min and max elements: " << result;
	//	break;
	//case 3:
	//	++result;
	//	for (size_t i = 0; i < 10; i++)
	//	{
	//		i++;
	//		result *= numbers[i];
	//	}
	//	cout << result;
	//	break;
	//case 4:
	//	for (size_t i = 0; i < 10; i++)
	//	{
	//		if (numbers[i] < 0) {
	//			index_min = i + 1;
	//			break;
	//		}

	//	}
	//	for (size_t i = 9; i > 0; i--)
	//	{
	//		if (numbers[i] < 0) {
	//			index_max = i;
	//			break;
	//		}
	//	}
	//	for (size_t i = index_min; i < index_max; i++)
	//	{
	//		result += numbers[i];
	//	}
	//	cout << "Amount: " << result;
	//	break;
	//}
#pragma endregion
		return 0;
}
