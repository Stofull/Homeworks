#include <iostream>
using namespace std;
#pragma region Task1
//int* create(int length)
//{
//	int* arr = new int[length] {};
//	return arr;
//}
//void add(int* mass, int length)
//{
//	for (int i = 0; i < length; i++)
//	{
//		mass[i] = i + 1;
//	}
//}
//void show(int* mass, int length)
//{
//	cout << "Your array is: ";
//	for (size_t i = 0; i < length; i++)
//	{
//		cout << mass[i] << " ";
//	}
//}
//void clear(int* mass)
//{
//	delete[] mass;
//}
//void new_Array(int*& mass, int& length, int test)
//{
//	int* tmp = new int[length + 1];
//	for (size_t i = 0; i < length; i++)
//	{
//		tmp[i] = mass[i];
//	}
//	tmp[length] = test;
//	delete[] mass;
//	mass = tmp;
//	length++;
//
//}
//void inArray(int*& mass, int& length, int index, int number)
//{
//if (index <= length)
//{
//    int* tmp = new int[length + 1];
//    for (size_t i = 0; i < index; i++)
//    {
//        tmp[i] = mass[i];
//    }
//    tmp[index] = number;
//    for (size_t i = index; i < length; i++)
//    {
//        tmp[i + 1] = mass[i];
//    }
//    delete[] mass;
//    mass = tmp;
//    length++;
//}
//}
//void delete_Array(int*& mass, int& length, int index)
//{
//	int* tmp = new int[length];
//	if (index < length)
//	{
//		for (size_t i = 0; i < index; i++)
//		{
//			tmp[i] = mass[i];
//		}
//		for (size_t i = index + 1; i < length; i++)
//		{
//			tmp[i - 1] = mass[i];
//		}
//		delete[] mass;
//		mass = tmp;
//		length--;
//	}
//}
//int main()
//{
//	int length = 10;
//	int* arr = new int[length] {};
//#pragma region Task1
//	//create(length);
//#pragma endregion
//#pragma region Task2
//	add(arr, length);
//#pragma endregion
//#pragma region Task3
//	show(arr, length);
//#pragma endregion
//#pragma region Task4
//	//clear(arr);
//#pragma endregion
//#pragma region Task5
//	//int test{};
//	//cout << endl << "Enter your number: ";
//	//cin >> test;
//	//new_Array(arr, length,test);
//	//for (size_t i = 0; i < length; i++)
//	//{
//	//	cout << arr[i]<<"|";
//	//}
//#pragma endregion
//#pragma region Task6
//	//int index{}, num{};
//	//cout <<endl<< "Enter the index between which you will write the number: " << endl;
//	//cin >> index;
//	//cout << endl << "Enter your number: " << endl;
//	//cin >> num;
//	//inArray(arr, length, index, num);
//	//for (size_t i = 0; i < length; i++)
//	//{
//	//	cout << arr[i]<<" ";
//	//}
//#pragma endregion
//#pragma region Task7
//	//int index{};
//	//cout << endl << "Enter the place of the number to be removed: ";
//	//cin >> index;
//	//delete_Array(arr, length, index);
//	//for (size_t i = 0; i < length; i++)
//	//{
//	//	cout << arr[i] << " ";
//	//}
//#pragma endregion
//	return 0;
//}
#pragma endregion
#pragma region Task2
//int simple(int number)
//{
//	int index{};
//	for (size_t i = 2; i < number - 1; i++)
//	{
//		if (number % i == 0)
//		{
//			index += 1;
//			break;
//		}
//	}
//	return index;
//}
//void tmp(int*& ar, int*& ar_new, const int length)
//{
//	int k{};
//	for (size_t i = 0; i < length; i++)
//	{
//		if (simple(ar[i]) != 0) {
//			ar_new[k] = ar[i];
//			k++;
//		}
//	}
//}
//int main()
//{
//	const int length = 10;
//	int* arr = new int[length] {14, 7, 6, 2, 94, 57, 26, 11, 25, 6};
//	int new_length{};
//	for (size_t i = 0; i < length; i++)
//	{
//		if (simple(arr[i]) != 0) new_length += 1;
//	}
//	int* arr_new = new int[new_length] {};
//	tmp(arr, arr_new, length);
//	cout << "Old array is: ";
//	for (size_t i = 0; i < length; i++)
//	{
//		cout << arr[i] << "| ";
//	}
//	cout << endl << "New array is: ";
//	for (size_t i = 0; i < new_length; i++)
//	{
//		cout << arr_new[i] << "| ";
//	}
//	return 0;
//}
#pragma endregion
#pragma region Task3
//void tmp(int* arr, int*& negative, int*& pozitive, const int length)
//{
//	int k{}, f{};
//	for (size_t i = 0; i < length; i++)
//	{
//		if (arr[i] >= 0)
//		{
//			pozitive[k] = arr[i];
//			k++;
//		}
//		else {
//			negative[f] = arr[i];
//			f++;
//		}
//	}
//}
//int main()
//{
//	const int length = 10;
//	int* arr = new int[length] {1, -2, 3, -4, 5, -6, 7, -8, 9, -10};
//	int neg{}, poz{};
//	for (size_t i = 0; i < length; i++)
//	{
//		if (arr[i] > 0) poz += 1;
//		else neg += 1;
//	}
//	int* arr_neq = new int[neg] {};
//	int* arr_poz = new int[poz] {};
//	tmp(arr, arr_neq, arr_poz, length);
//	cout << "First array is: ";
//	for (size_t i = 0; i < length; i++)
//	{
//		cout << arr[i] << "| ";
//	}
//	cout << endl << "Array only pozitive nums: ";
//	for (size_t i = 0; i < poz; i++)
//	{
//		cout << arr_poz[i] << "| ";
//	}
//	cout << endl << "Array only negative nums: ";
//	for (size_t i = 0; i < neg; i++)
//	{
//		cout << arr_neq[i] << "| ";
//	}
//return 0;
//}
#pragma endregion
