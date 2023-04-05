#include <iostream>
#include <time.h>
using namespace std;
#pragma region Task1
//int main()
//{
//	srand(time(0));
//	int length_f{}, length_s{}, test{}, origin{};
//	cout << "Enter length first array: ";
//	cin >> length_f;
//	int* arr_f = new int[length_f];
//	for (size_t i = 0; i < length_f; i++) arr_f[i] = 1 + rand() % 10;
//	cout << "Enter length second array: ";
//	cin >> length_s;
//	int* arr_s = new int[length_s];
//	for (size_t i = 0; i < length_s; i++) arr_s[i] = 1 + rand() % 10;
//	for (size_t i = 0; i < length_f; i++)
//	{
//		for (size_t j = 0; j < length_s; j++)
//		{
//			if (arr_f[i] == arr_s[j]) test += 1;
//
//		}
//		if (test == 0) origin += 1;
//		test = 0;
//	}
//	int* result = new int[origin] {};
//	int num{};
//	for (size_t k = 0; k < origin; k++)
//	{
//		for (size_t i = 0; i < length_f; i++)
//		{
//			for (size_t j = 0; j < length_s; j++)
//			{
//				if (arr_f[i] == arr_s[j]) test += 1;
//			}
//			if (test == 0)
//			{
//				for (size_t f = 0; f < origin; f++)
//				{
//					if (result[f] == arr_f[i])
//					{
//						origin -= 1;
//						num += 1;
//					}
//				}
//				if (num == 0)
//				{
//					result[k] = arr_f[i];
//					k++;
//				}
//				num = 0;
//			}
//			test = 0;
//		}
//	}
//	cout << endl << "First array:\n";
//	for (size_t i = 0; i < length_f; i++) cout << arr_f[i] << " ";
//	cout << endl << "\nSecond array:\n";
//	for (size_t i = 0; i < length_s; i++) cout << arr_s[i] << " ";
//	cout << endl << "\nResult:\n";
//	for (size_t i = 0; i < origin; i++)cout << result[i] << " ";
//	return 0;
//}
#pragma endregion
#pragma region Task2
//int main()
//{
//	srand(time(0));
//	int length_f{}, length_s{}, test{}, origin{}, origin_b{};
//	cout << "Enter length first array: ";
//	cin >> length_f;
//	int* arr_f = new int[length_f];
//	for (size_t i = 0; i < length_f; i++) arr_f[i] = 1 + rand() % 10;
//	cout << "Enter length second array: ";
//	cin >> length_s;
//	int* arr_s = new int[length_s];
//	for (size_t i = 0; i < length_s; i++) arr_s[i] = 1 + rand() % 10;
//	for (size_t i = 0; i < length_f; i++)
//	{
//		for (size_t j = 0; j < length_s; j++)
//		{
//			if (arr_f[i] == arr_s[j]) test += 1;
//		}
//		if (test == 0) origin += 1;
//		test = 0;
//	}
//	int* result = new int[origin] {};
//	int num{};
//	for (size_t k = 0; k < origin; k++)
//	{
//		for (size_t i = 0; i < length_f; i++)
//		{
//			for (size_t j = 0; j < length_s; j++)
//			{
//				if (arr_f[i] == arr_s[j]) test += 1;
//			}
//			if (test == 0)
//			{
//				for (size_t f = 0; f < origin; f++)
//				{
//					if (result[f] == arr_f[i])
//					{
//						origin -= 1;
//						num += 1;
//					}
//				}
//				if (num == 0)
//				{
//					result[k] = arr_f[i];
//					k++;
//				}
//				num = 0;
//			}
//			test = 0;
//		}
//	}
//	for (size_t i = 0; i < length_s; i++)
//	{
//		for (size_t j = 0; j < length_f; j++)
//		{
//			if (arr_s[i] == arr_f[j]) test += 1;
//		}
//		if (test == 0) origin_b += 1;
//		test = 0;
//	}
//	int* result_B = new int[origin_b] {};
//	int num_B{};
//	for (size_t k = 0; k < origin_b; k++)
//	{
//		for (size_t i = 0; i < length_s; i++)
//		{
//			for (size_t j = 0; j < length_f; j++)
//			{
//				if (arr_s[i] == arr_f[j]) test += 1;
//			}
//			if (test == 0)
//			{
//				for (size_t f = 0; f < origin_b; f++)
//				{
//					if (result_B[f] == arr_s[i])
//					{
//						origin_b -= 1;
//						num_B += 1;
//					}
//				}
//				if (num_B == 0)
//				{
//					result_B[k] = arr_s[i];
//					k++;
//				}
//				num_B = 0;
//			}
//			test = 0;
//		}
//	}
//	int len = origin + origin_b;
//	int* array = new int[len] {};
//	for (size_t i = 0; i < origin; i++)
//	{
//		array[i] = result[i];
//	}
//	for (size_t j = 0; j < len; j++)
//	{
//		array[j + origin] = result_B[j];
//	}
//	cout << endl << "First array:\n";
//	for (size_t i = 0; i < length_f; i++) cout << arr_f[i] << " ";
//	cout << endl << "\nSecond array:\n";
//	for (size_t i = 0; i < length_s; i++) cout << arr_s[i] << " ";
//	cout << endl << "\nResult:\n";
//	for (size_t i = 0; i < len; i++) cout << array[i] << " ";
//	return 0;
//}
#pragma endregion
