#include <iostream>
#include <time.h>
using namespace std;
#pragma region Task1
//void mass(int* mas, const int len, int& sum, int& mult)
//{
//	for (size_t i = 0; i < len; i++)
//	{
//		sum += mas[i];
//	}
//	for (size_t i = 0; i < len; i++)
//	{
//		mult *= mas[i];
//	}
//}
//int main()
//{
//	const int length = 5;
//	int* arr = new int[length]{};
//	int res{}, resm = 1;
//	for (size_t i = 0; i < length; i++)
//	{
//		arr[i] = i + 1;
//	}
//	mass(arr, length, res, resm);
//	cout << "Reuslt sum is: " << res << endl;
//	cout << "Reuslt multipl is: " << resm;
//	return 0;
//}
#pragma endregion
#pragma region Task2
//void dif(int* mas, const int length)
//{
//	int poz{}, neg{}, zero{};
//	for (size_t i = 0; i < length; i++)
//	{
//		if (mas[i] > 0) poz += 1;
//		else if (mas[i] < 0) neg += 1;
//		else zero += 1;
//	}
//	cout << "Count of positive number is: " << poz << endl;
//	cout << "Count of negative number is: " << neg << endl;
//	cout << "Count of zero is: " << zero << endl;
//}
//int main()
//{
//	const int length = 5;
//	int* arr = new int[length] {};
//	for (size_t i = 0; i < length; i++)
//	{
//		cout << "Enter your number: " << endl;
//		cin >> arr[i];
//	}
//	cout << "Your array is: " << endl;
//	for (size_t i = 0; i < length; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//	dif(arr, length);
//	return 0;
//}
#pragma endregion
#pragma region Task3
//void copy(int* arr, int* arr2, int len)
//{
//	for (size_t i = 0; i < len; i++)
//	{
//		for (size_t j = 0; j < len; j++)
//		{
//		if (arr[i] == arr2[j]) cout << arr[i] << " ";
//		}
//	}
//}
//int main()
//{
//	const int length = 5;
//	int* arr = new int[length] {};
//	for (size_t i = 0; i < length; i++)
//	{
//		cout << "Enter your number: " << endl;
//		cin >> arr[i];
//	}
//	cout << "Your first array is: " << endl;
//	for (size_t i = 0; i < length; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//	int* arr2 = new int[length] {};
//	for (size_t i = 0; i < length; i++)
//	{
//		cout << "Enter your number: " << endl;
//		cin >> arr2[i];
//	}
//	cout << "Your second array is: " << endl;
//	for (size_t i = 0; i < length; i++)
//	{
//		cout << arr2[i] << " ";
//	}
//	cout << endl;
//	cout << "Same numbers is: ";
//	copy(arr, arr2, length);
//	
//	return 0;
//}
#pragma endregion
#pragma region Task4
//void neqative(int* arr, int& length)
//{
//	for (size_t i = 0; i < 5; i++)
//	{
//		if (*(arr + i) < 0) length -= 1;
//	}
//}
//int main()
//{
//	int length = 5;
//	int* arr = new int[length] {};
//	for (size_t i = 0; i < length; i++)
//	{
//	    cout << "Enter your array: ";
//		cin >> arr[i];
//	}
//	cout << endl;
//	neqative(arr, length);
//	int* new_arr = new int[length];
//	int k{};
//	for (size_t i = 0; i < 5; i++)
//	{
//		if (*(arr + i) > 0)
//		{
//			*(new_arr + k) = *(arr + i);
//			k++;
//		}
//	}
//	cout << length<< "New array is: ";
//	for (size_t i = 0; i < length; i++)
//	{
//		cout << new_arr[i] << " ";
//	}
//	return 0;
//}
#pragma endregion
#pragma region Task5
//void result(int* ar, const int length, int* new_arr, int new_len, int* total_result)
//{
//	for (size_t i = 0; i < length; i++)
//	{
//		total_result[i] = ar[i];
//	}
//	int k{};
//	for (size_t i = 0; i < new_len; i++)
//	{
//		total_result[length + k] = new_arr[i];
//		k++;
//	}
//	for (size_t i = 0; i < length + new_len; i++)
//	{
//		cout << total_result[i] << " ";
//	}
//}
//int main()
//{
//	srand(time(0));
//	int new_length{};
//	const int length = 5;
//	int* arr = new int[length];
//	cout << "Your random array is: ";
//	for (size_t i = 0; i < length; i++)
//	{
//		arr[i] = 1 + rand() % 10;
//		cout << arr[i]<<" ";
//	}
//	cout<<endl << "How many new numbers would you like to enter?\n";
//	cin >> new_length;
//	int* new_arr = new int[new_length];
//	for (size_t i = 0; i < new_length; i++)
//	{
//		cout << "Enter new numbers: ";
//		cin >> new_arr[i];
//	}
//	int* total = new int[length + new_length];
//	result(arr, length, new_arr, new_length, total);
//	return 0;
//}
#pragma endregion
#pragma region Task6
//void result(int* ar, const int length, int* new_arr, int new_len, int* total_result, int mesto)
//{
//	int f{};
//	for (size_t i = 0; i < mesto; i++)
//	{
//		total_result[i] = ar[f];
//		f++;
//	}
//	int k{};
//	for (size_t i = 0; i < new_len; i++)
//	{
//		total_result[mesto + k] = new_arr[i];
//		k++;
//	}
//	for (size_t i = mesto + k; i < length + new_len; i++)
//	{
//		total_result[i] = ar[f];
//		f++;
//	}
//
//	for (size_t i = 0; i < length + new_len; i++)
//	{
//		cout << total_result[i] << " ";
//	}
//}
//int main()
//{
//	srand(time(0));
//	int pos{};
//	int new_length{};
//	const int length = 10;
//	int* arr = new int[length];
//	cout << "Your random array is: ";
//	for (size_t i = 0; i < length; i++)
//	{
//		arr[i] = 1 + rand() % 9;
//		cout << "|" << arr[i] << "|";
//	}
//	cout << endl << "Position of numbers:  ";
//	for (size_t i = 0; i < length; i++)	cout << "|" << i + 1 << "|";
//	cout << endl << "How many new numbers would you like to enter?\n";
//	cin >> new_length;
//	int* new_arr = new int[new_length];
//
//	for (size_t i = 0; i < new_length; i++)
//	{
//		cout << "Enter new numbers: ";
//		cin >> new_arr[i];
//	}
//	cout << "Where to enter the numbers?\n";
//	cin >> pos;
//	int* total = new int[length + new_length];
//	result(arr, length, new_arr, new_length, total, pos);
//	return 0;
//}
#pragma endregion
#pragma region Task7
//void result(int* ar, int* n_arr, const int length, int new_len, int* total_result, int mesto)
//{
//	int f{};
//	for (size_t i = 0; i < mesto; i++)
//	{
//		n_arr[i] = ar[f];
//		f++;
//	}
//	int k{};
//	for (size_t i = 0; i < new_len; i++)
//	{
//		n_arr[mesto + k] = 0;
//		k++;
//	}
//	f += new_len;
//	for (size_t i = mesto + new_len; i < length; i++)
//	{
//		n_arr[i] = ar[f];
//		f++;
//	}
//	int y{};
//	for (size_t i = 0; i < length; i++)
//	{
//		if (n_arr[i] != 0)
//		{
//			total_result[y] = n_arr[i];
//			y++;
//		}
//	}
//	for (size_t i = 0; i < length - new_len; i++)
//	{
//		cout << total_result[i] << " ";
//	}
//
//}
//int main()
//{
//	srand(time(0));
//	int pos{};
//	int new_length{};
//	const int length = 10;
//	int* arr = new int[length];
//	int* n_arr = new int[length];
//	cout << "Your random array is: ";
//	for (size_t i = 0; i < length; i++)
//	{
//		arr[i] = 1 + rand() % 9;
//		cout << "|" << arr[i] << "|";
//	}
//	cout << endl << "Position of numbers:  ";
//	for (size_t i = 0; i < length; i++)	cout << "|" << i + 1<< "|";
//	cout << endl << "How many new numbers would you like to delete?\n";
//	cin >> new_length;
//	cout << "After what position do you want to remove the numbers?\n";
//	cin >> pos;
//	int* total = new int[length + new_length];
//	result(arr, n_arr, length, new_length, total, pos);
//	return 0;
//}
#pragma endregion