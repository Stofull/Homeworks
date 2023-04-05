#include <iostream>
#include <time.h>
using namespace std;
int main()
{
#pragma region Task1
	//int arr[20][20];
	//int number{}, num{};
	//srand(time(0));
	//cout << "Enter your number: ";
	//cin >> number;
	//num = number;
	//for (size_t i = 0; i < num; i++)
	//{
	//	for (size_t j = 0; j < num; j++)
	//	{
	//		arr[i][j] = number;
	//		number *= 2;
	//		cout << arr[i][j] << "\t";
	//	}
	//	cout << endl;
	//}
#pragma endregion
#pragma region Task2
	//int arr[20][20];
	//int number{}, num{};
	//srand(time(0));
	//cout << "Enter your number: ";
	//cin >> number;
	//num = number;
	//for (size_t i = 0; i < num; i++)
	//{
	//	for (size_t j = 0; j < num; j++)
	//	{
	//		arr[i][j] = number;
	//		number++;
	//		cout << arr[i][j] << "\t";
	//	}
	//	cout << endl;
	//}
#pragma endregion
#pragma region Task3
	srand(time(0));
	int arr[5][10], number{}, arr2[5][10], turn{};
	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j < 10; j++)
		{
			arr[i][j] = 1 + rand() % 10;
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
	cout
		<< "1.Move left" << endl
		<< "2.Move right" << endl
		<< "3.Move up" << endl
		<< "4.Move down" << endl
		<< "Move to:";
	cin >> turn;
	cout << "How much you want to move? ";
	cin >> number;
	switch (turn)
	{
	case 1:
		for (size_t i = 0; i < 5; i++)
		{
			for (size_t j = number; j < 10; j++)
			{
				arr2[i][j] = arr[i][j];
				cout << arr2[i][j] << "\t";
			}
			for (size_t j = 0; j < number; j++)
			{
				arr2[i][j] = arr[i][j];
				cout << arr2[i][j] << "\t";
			}
			cout << endl;
		}
		break;
	case 2:
		for (size_t i = 0; i < 5; i++)
		{
			for (size_t j = 0; j < number; j++)
			{
				arr2[i][j] = arr[i][10 - number + j];
				cout << arr2[i][j] << "\t";
			}
			for (size_t j = 0; j < 10 - number; j++)
			{
				arr2[i][j] = arr[i][j];
				cout << arr2[i][j] << "\t";
			}
			cout << endl;
		}
		break;
	case 3:
		for (size_t i = number; i < 5; i++)
		{

			for (size_t j = 0; j < 10; j++)
			{
				arr2[i][j] = arr[i][j];
				cout << arr2[i][j] << "\t";
			}
			cout << endl;
		}
		for (size_t i = 0; i < number; i++)
		{
			for (size_t j = 0; j < 10; j++)
			{
				arr2[i][j] = arr[i][j];
				cout << arr2[i][j] << "\t";
			}
			cout << endl;
		}
		break;
	case 4:
		for (size_t i = 5 - number; i < 5; i++)
		{
			for (size_t j = 0; j < 10; j++)
			{
				arr2[i][j] = arr[i][j];
				cout << arr2[i][j] << "\t";
			}
			cout << endl;

		}
		for (size_t i = 0; i < 5 - number; i++)
		{
			for (size_t j = 0; j < 10; j++)
			{
				arr2[i][j] = arr[i][j];
				cout << arr2[i][j] << "\t";
			}
			cout << endl;
		}
		break;
	}
#pragma endregion
	return 0;
}