#include <iostream>
using namespace std;
#pragma region Task1
//int foundDegree(int number, int degree)
//{
//	int res = 1;
//	for (size_t i = 0; i < degree; i++)
//	{
//		res *= number;
//	}
//	return res;
//}
//int main()
//{
//	int num{}, degree{};
//	cout << "Enter your number: ";
//	cin >> num;
//	cout << "Enter your degree: ";
//	cin >> degree;
//	cout << num << "^" << degree << "=" << foundDegree(num, degree);
//    return 0;
//}
#pragma endregion
#pragma region Task2
//int diap(int start, int end)
//{
//	int res{};
//	for (size_t i = start + 1; i < end; i++)
//	{
//		res += i;
//	}
//	return res;
//}
//int main()
//{
//	int diap_start{}, diap_end{};
//	cout << "Enter range start: ";
//	cin >> diap_start;
//	cout << "Enter range end: ";
//	cin >> diap_end;
//	cout << "Summ is: " << diap(diap_start, diap_end);
//	return 0;
//}
#pragma endregion
#pragma region Task3
//int perfectNumbers(int num)
//{
//	int res{};
//	for (size_t i = 1; i < num; i++)
//	{
//		if (num % i == 0) res += i;
// 	}
//		return res;
//
//}
//int main()
//{
//	int number{};
//	cout << "Enter your number: ";
//	cin >> number;
//	int arr = perfectNumbers(number);
//	if (arr == number) cout << number << ": Is perfect number!";
//	else cout << number << ": Is not perfect number!";
//	return 0;
//}
#pragma endregion
#pragma region Task5
//int happyNum(int num)
//{
//	int temp = 1, total1{}, total2{};
//	for (size_t i = 0; i < 6; i++)
//	{
//		if (i < 3) total1 += num / temp % 10;
//		else total2 += num / temp % 10;
//		temp *= 10;
//	}
//	bool res{total1 == total2};
//	return res;
//}
//int main()
//{
//	int number{};
//	cout << "Enter your number: ";
//	cin >> number;
//	happyNum(number) ? cout << "Happy number!" : cout << "Not happy number!";
//	return 0;
//}
#pragma endregion