#include <iostream> 
using namespace std;
#pragma region Task1 
//int mystrcmp(const char* str1,const  char* str2) 
//{ 
// int f = 0, s = 0; 
// while (str1[f] != 0)f++; 
// while (str2[s] != 0) s++; 
// if (f > s) return 1; 
// else if (f < s) return -1; 
// else return 0; 
//} 
//int main() 
//{ 
//	int length_f{}, length_s{};
// cout << "Enter the length of the first array: ";
// cin >> length_f;
// cout << "Enter the length of the second array: ";
// cin >> length_s;
// char* first_arr = new char[length_f] {}; 
// char* second_arr = new char[length_s] {}; 
// for (size_t i = 0; i < length_f - 1; i++) first_arr[i] = i + 1; 
// for (size_t i = 0; i < length_s - 1; i++) second_arr[i] = i + 1; 
// cout << mystrcmp(first_arr, second_arr); 
// return 0; 
//} 
#pragma endregion 
#pragma region Task2 
//const int getLength(char* str) {
//	int i = 0;
//	while (str[i] != '\0') {
//		i++;
//	}
//	return i;
//}
//int StringToNumber(char* str)
//{
//	int num{};
//	int index = getLength(str);
//	for (size_t i = 0; i < index; i++)
//	{
//		num = num * 10 + (str[i] - 48);
//	}
//	return num;
//}
//int main()
//{
//	char* myWord = new char[20] {};
//	cout << "Enter your number to switch int: ";
//	cin >> myWord;
//	int num = StringToNumber(myWord);
//	cout << "Result:" << num;
//	return 0;
//}
#pragma endregion 
#pragma region Task3 
//int length(int n) {
//	int l = 1;
//	for (; n /= 10; ++l);
//	return l;
//}
//char* NumberToString(int number)
//{
//	int procent = 10;
//	int one = 1;
//	int tmp{};
//	int index = length(number);
//	char* result = new char[index + 1];
//	for (size_t i = 0; i < index; i++)
//	{
//		tmp = number % procent / one;
//		procent *= 10;
//		one *= 10;
//		char num = tmp + 48;
//		result[index - 1 - i] = num;
//	}
//	return result;
//}
//int main()
//{
//	int number{};
//	cout << "Enter your numbers to switch char: ";
//	cin >> number;
//	int index = length(number);
//	cout << "Result: ";
//	for (size_t i = 0; i < index; i++)
//	{
//		cout << NumberToString(number)[i];
//	}
//	return 0;
//}
#pragma endregion
#pragma region Task4
//const int getLength(char* str) {
//	int i = 0;
//	while (str[i] != '\0') {
//		i++;
//	}
//	return i;
//}
//bool checkInput(char* arr, int min, int max)
//{
//	int length = getLength(arr);
//	for (size_t i = 0; i < length; i++)
//	{
//		if (arr[i] < min || arr[i] > max)
//		{
//			return false;
//		}
//	}
//	return true;
//}
//char* Uppercase(char* str1)
//{
//	int length = getLength(str1);
//	for (size_t i = 0; i < length; i++)
//	{
//		str1[i] = str1[i] - 32;
//	}
//	return str1;
//}
//int main()
//{
//	char* myWord = new char[20] {};
//	cout << "Enter your word with lower case: ";
//	cin >> myWord;
//	if (checkInput(myWord, 97, 122))
//		cout << "Result: " << Uppercase(myWord);
//	else
//		cout << "Incorrect input";
//	return 0;
//}
#pragma endregion
#pragma region Task5
//const int getLength(char* str) {
//	int i = 0;
//	while (str[i] != '\0') {
//		i++;
//	}
//	return i;
//}
//bool checkInput(char* arr, int min, int max)
//{
//	int length = getLength(arr);
//	for (size_t i = 0; i < length; i++)
//	{
//		if (arr[i] < min || arr[i] > max)
//		{
//			return false;
//		}
//	}
//	return true;
//}
//char* Uppercase(char* str1)
//{
//	int length = getLength(str1);
//	for (size_t i = 0; i < length; i++)
//	{
//		str1[i] = str1[i] + 32;
//	}
//	return str1;
//}
//int main()
//{
//	char* myWord = new char[20] {};
//	cout << "Enter your word with lower case: ";
//	cin >> myWord;
//	if (checkInput(myWord, 64, 91))
//		cout << "Result:" << Uppercase(myWord);
//	else
//		cout << "Incorrect input";
//	return 0;
//}
#pragma endregion
#pragma region Task6
//const int getLength(char* str) {
//	int i = 0;
//	while (str[i] != '\0') {
//		i++;
//	}
//	return i;
//}
//char* mystrrev(char* str)
//{
//	char* tmp = new char[20] {};
//	int length = getLength(str);
//	int index = length - 1;
//	for (size_t i = 0; i < length; i++)
//	{
//		tmp[i] = str[index];
//		index--;
//	}
//	return tmp;
//}
//int main()
//{
//	char* myWord = new char[20] {};
//	cout << "Enter you word: ";
//	cin >> myWord;
//	cout << "Result: " << mystrrev(myWord);
//	return 0;
//}
#pragma endregion
