#include "Source.h"
const int LengthChar(char* str) {
	int i = 0;
	while (str[i] != '\0') {
		i++;
	}
	return i;
}
void edit(char* str, char* old_w, char* new_w, int length)
{
    int i = 0;
    while (str[i] != '\0') {
        int j = 0;
        while (str[i + j] == old_w[j] && old_w[j] != '\0') {
            j++;
        }
        if (old_w[j] == '\0') {
            int k = 0;
            while (new_w[k] != '\0') {
                str[i + k] = new_w[k];
                k++;
            }
        }
        i++;
    }
}
void point(char* str, int length)
{
	for (size_t i = 0; i < length; i++)
	{
		if (str[i] == 46 || str[i] == 33 || str[i] == 63)
		{ 
			if (str[i + 1] == 32)
			{
				str[i + 2] -= 32;
			}
			else if (str[i + 1] != 32) str[i + 1] -= 32;
		}
	}
}
void letterCount(char* str, int* ar, int length)
{
	int tmp{};
	for (size_t i = 0; i < length; i++)
	{
		if (str[i] >= 97 || str[i] <= 122)
		{

			tmp = str[i] - 97;
			ar[tmp] += 1;
		}
	}
}
int findNum(char* str, int length, int count)
{
	for (size_t i = 0; i < length; i++)
	{
		if (str[i] >= 48 && str[i] <= 57) count++;
	}
	return count;
}
void lowerCase(char* str, int length)
{
	for (size_t i = 0; i < length; i++)
	{
		if (str[i] >= 65 && str[i] <= 90) str[i] += 32;
	}
}