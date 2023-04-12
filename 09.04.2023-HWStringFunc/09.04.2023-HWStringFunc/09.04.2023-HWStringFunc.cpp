#include <iostream>
using namespace std;
float Max(int str[], const int length)
{
	int tmp = str[0];
	for (size_t i = 0; i < length; i++)
	{
		if (tmp > str[i]) tmp = str[i];
	}
	return tmp;
}
float Min(int str[], const int length)
{
	int tmp = str[0];
	for (size_t i = 0; i < length; i++)
	{
		if (tmp < str[i]) tmp = str[i];
	}
	return tmp;
}
float Avg(int str[], const int length)
{
	double tmp{};
	for (size_t i = 0; i < length; i++)
	{
		tmp += str[i];
	}
	return tmp / length;
}
void Action(int arrF[], int arrS[], const int lenF, const int lenS, float (*opera[])(int[], const int))
{
	int choise{};
	cout
		<< "1.Shows the minimum number in an arrays." << endl
		<< "2.Shows the maximum number in an arrays." << endl
		<< "3.Shows the average number in an arrays." << endl;
	cin >> choise;
	switch (choise)
	{
	case 1:
		cout << "In first array max is: " << opera[0](arrF, lenF) << endl;
		cout << "In second array max is: " << opera[0](arrS, lenS) << endl;
		break;
	case 2:
		cout << "In first array min is: " << opera[1](arrF, lenF) << endl;
		cout << "In second array min is: " << opera[1](arrS, lenS) << endl;
		break;
	case 3:
		cout << "In first array average is: " << opera[2](arrF, lenF) << endl;
		cout << "In second array average is: " << opera[2](arrS, lenS) << endl;
		break;
	default:
		cout << "|Incorrect value|" << endl;
		break;
	}
}
int main()
{
	const int lengthF = 5, lengthS = 8;
	int firstArr[lengthF]{ 2,4,6,8,3 };
	int secondArr[lengthS]{ 1,3,5,7,9,4,1,9 };
	float (*operations[])(int[], const int) = { Max,Min,Avg };
	for (size_t i = 0; i < lengthF; i++)
	{
		cout << firstArr[i] << "|";
	}
	cout << endl;
	for (size_t i = 0; i < lengthS; i++)
	{
		cout << secondArr[i] << "|";
	}
	cout << endl;
	Action(firstArr, secondArr, lengthF, lengthS, operations);
	return 0;
}