#include <iostream>
using namespace std;
#pragma region Task1
const int getLength(char* str) {
	int length = 300;
	int f = 0;
	for (size_t i = 0; i < length; i++)
	{
		if (str[i] != '\0' && str[i] != 32)
		{
			f++;
		}
	}
	return f;
}
void trade(char*& str, char first, char second)
{
	int length = getLength(str);
	for (size_t i = 0; i < length; i++)
	{
		if (str[i] == first) str[i] = second;
	}
}
void sort(char*& str)
{
	int length = getLength(str);
	char tmp{};
	for (size_t i = 0; i < length; i++)
	{
		for (size_t j = 0; j < length - i - 1; j++)
		{
			if (str[j] > str[j + 1])
			{
				tmp = str[j];
				str[j] = str[j + 1];
				str[j + 1] = tmp;
			}
		}
	}
}
int main()
{
	int choise{};
	char first_S{}, second_S{};
	char* myWord = new char[300] {};
	cout << "Enter your text: ";
	cin.getline(myWord, 300);
	int length = getLength(myWord);
	cout
		<< "1.Get length a text" << endl
		<< "2.Change a symbol" << endl
		<< "3.Sort by ASCII table" << endl;
	cin >> choise;
	switch (choise)
	{
	case 1:
		cout << getLength(myWord);
		break;
	case 2:
		cout << "Enter the character you want to change: ";
		cin >> first_S;
		cout << "Enter the character you want to change to: ";
		cin >> second_S;
		trade(myWord, first_S, second_S);
		cout << myWord;
		break;
	case 3:
		cout << "Your sorted text is:";
		sort(myWord);
		cout << myWord;
		break;
	}
	return 0;
}
#pragma endregion