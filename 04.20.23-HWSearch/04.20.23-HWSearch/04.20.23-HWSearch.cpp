#include <iostream>
using namespace std;
const int getLength(char* str)
{
	int i = 0;
	while (str[i] >= '\0' && str[i + 1] >= '\0') {
		i++;
	}
	return i;
}
int found(char text[], char search[])
{
	int count{};
	const int lengthText = getLength(text);
	const int lengthSearch = getLength(search);
	char test[20]{};

	for (size_t i = 0; i < lengthText; i++)
	{
		for (size_t j = 0; j < lengthSearch; j++)
		{
			if (text[i + j] != search[j] && text[i + j] != search[lengthSearch - j - 1])
			{
				break;
			}
			if (j == lengthSearch - 1)
			{
				count++;
			}
		}
	}
	return 0;
}
int main()
{
	const int MAX_LENGTH = 1000;
	char text[MAX_LENGTH];
	char search[MAX_LENGTH];
	cout << "Enter the text: " << endl;
	cin.getline(text, MAX_LENGTH);
	cout << "Enter the word to search for: " << endl;
	cin.getline(search, MAX_LENGTH);
	return 0;
}

