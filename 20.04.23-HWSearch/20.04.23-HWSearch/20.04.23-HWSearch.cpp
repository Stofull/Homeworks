#include <iostream> 
using namespace std;
const int LengthChar(char* str) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}
int wordInText(char* str, char* word, const int length) {
    int count = 0;
    int t = 0;
    int result = 0;
    const int lengthWord = LengthChar(word);
    char tmpText[20] = {};
    for (int i = 0; i <= length; i++) {
        if (str[i] == ' ' || str[i] == '\0' || i == length) {
            int k = 0;
            while (t < i) {
                tmpText[k] = str[t];
                t++;
                k++;
            }
            for (int j = 0; j < lengthWord; j++) {
                if (tmpText[j] == word[j])
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
            if (count == lengthWord) {
                result++;
            }
            count = 0;
            t++;
            for (size_t i = 0; i < 20; i++)
            {
                tmpText[i] = '\0';
            }
        }
    }
    return result;
}
int main() {
    char text[100];
    cout << "Enter your text: ";
    cin.getline(text, 100);
    const int length = LengthChar(text);
    char word[20];
    cout << "Enter a word to search in the text: ";
    cin.getline(word, 20);
    const int lengthWord = LengthChar(word);
    char tmp[20]{};
    for (size_t i = 0, j = lengthWord - 1; i < lengthWord; i++, j--)
    {
        tmp[i] = word[j];
    }
    cout << "Match: " << wordInText(text, word, length) + wordInText(text, tmp, length) << endl;
    return 0;
}
