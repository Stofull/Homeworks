#include <iostream>
#include <time.h>
using namespace std;
#pragma region Task1
//int degree(int number, int num) {
//	if (num < 1)
//		return 1;
//	return number * degree(number, num - 1);
//}
//int main()
//{
//	int num{}, square{};
//	cout << "Enter your number: ";
//	cin >> num;
//	cout << "Enter your degree: ";
//	cin >> square;
//	cout << "Result is: " << degree(num, square);
//	return 0;
//}
#pragma endregion
#pragma region Task2
//int star(int number) {
//	if (number + 1 > 1)
//		cout << "*";
//	return star(--number);
//		return 1;
//}
//int main()
//{
//	int num{};
//	cout << "Enter your number: ";
//	cin >> num;
//	cout << star(num);
//	return 0;
//}
#pragma endregion
#pragma region Task3
//int sum(int first, int second)
//{
//	if (first == second)
//		return 0;
//	return first + sum(first + 1, second);
//}
//int main()
//{
//	int start{}, end{};
//	cout << "Enter range start: ";
//	cin >> start;
//	cout << "Enter range end: ";
//	cin >> end;
//	cout << sum(start + 1, end);
//
//
//
//	return 0;
//}
#pragma endregion
#pragma region Task4
//int foo(int* arr, const int* end) {
//	if (arr == end) return 0;
//	return (*arr) + foo(arr + 1, end);
//}
//
//int main()
//{
//	srand(time(0));
//	const int size = 100;
//	int arr[size];
//	int min{};
//	for (size_t i = 0; i < size; i++) arr[i] = 1 + rand() % 100;
//	for (int i = 0; i < size; ++i) cout << arr[i] << " ";
//	cout << endl;
//	min = foo(arr, arr + 10);
//	for (size_t i = 0; i < 90; i++)
//	{
//		//cout << foo(arr + i, arr + 10 + i) << endl;
//		if (min > foo(arr + i, arr + 10 + i)) min = foo(arr + i, arr + 10 + i);
//	}
//	cout <<"Minimum sum of ten numbers from array: "<< min;
//	return 0;
//}
#pragma endregion
#pragma region Task5
#pragma region Task5.1
int maxNum(int* mas, int num)
{
	for (size_t i = 0; i < 10; i++)
	{
		if (num < mas[i]) num = mas[i];
	}
	return num;
}
float maxNum(float* mas, float num)
{
	for (size_t i = 0; i < 10; i++)
	{
		if (num < mas[i]) num = mas[i];
	}
	return num;
}
int main()
{
	srand(time(0));
	float arr[10];
	int max{};
	for (size_t i = 0; i < 10; i++)
	{
		arr[i] = 1 + rand() % 10;
		cout << arr[i] << " ";
	}
	cout << endl << "Max num is: " << maxNum(arr, max);
	return 0;
}
#pragma endregion
#pragma region Task5.2
//int maxNum(int *mas)
//{
//	int max{};
//	for (size_t i = 0; i < 20; i++)
//	{
//		if (max < mas[i]) max = mas[i];
//	}
//	return max;
//}
//float maxNum(float *mas)
//{
//	int max{};
//	for (size_t i = 0; i < 20; i++)
//	{
//		if (max < mas[i]) max = mas[i];
//	}
//	return max;
//}
//int main() {
//	srand(time(0));
//	int arr[2][10];
//	for (size_t i = 0; i < 10; i++)
//	{
//		arr[0][i] = 1 + rand() % 50;
//		arr[1][i] = 20 + rand() % 70;
//	}
//	cout << "Max num is:" << maxNum(*arr);
//
//	return 0;
//}
#pragma endregion
#pragma region Task5.3
//int large(int first, int second)
//{
//	int max{};
//	if (first > second) max = first;
//	else max = second;
//	return max;
//}
//float large(float second, float first)
//{
//	float max{};
//	if (first > second) max = first;
//	else max = second;
//	return max;
//}
//int main()
//{
//	float num{}, number{};
//	cout << "Enter your first number: ";
//	cin >> num;
//	cout << "Enter your second number: ";
//	cin >> number;
//	cout << large(num, number) << " - Greater than the second number";
//	return 0;
//}
#pragma endregion
#pragma region Task5.4
//int large(int first, int second, int third)
//{
//	int max{};
//	if (first > second && first > third) max = first;
//	else if (second > first && second > third)max = second;
//	else max = third;
//	return max;
//}
//float large(float second, float first, float third)
//{
//	float max{};
//	if (first > second && first > third) max = first;
//	else if (second > first && second > third)max = second;
//	else max = third;
//	return max;
//}
//int main()
//{
//	float num{}, number{}, third_num{};
//	cout << "Enter your first number: ";
//	cin >> num;
//	cout << "Enter your second number: ";
//	cin >> number;
//	cout << "Enter your third number: ";
//	cin >> third_num;
//	cout << large(num, number, third_num) << " - Greater than other number";
//	return 0;
//}
#pragma endregion
#pragma endregion