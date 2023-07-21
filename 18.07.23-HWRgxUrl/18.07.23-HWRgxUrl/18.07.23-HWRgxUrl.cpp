#include <iostream>
#include <regex>
#include <string>
using namespace std;
int main()
{
    // REGEX DATA

    string data{ "20.03.2003" };
    regex dataRegex(R"((0[1-9]|[1-2][0-9]|3[01])\.(0[1-9]|1[0-2])\.(\d{4,}))");
    if (regex_match(data, dataRegex))
        cout << "Correct data" << endl;
    else 
        cout << "Incorrect data" << endl;
    
    // REGEX URL
    string URL{ "https://github.com/Stofull/HomeWorks/tree/OOP" };
    regex URLRegex(R"((?:https?)(:\/\/\w+)(?:\.\w{2,})+(?:[^ \s]+))");
    if (regex_match(URL, URLRegex))
        cout << "Correct URL" << endl;
    else
        cout << "Incorrect URL" << endl;

    // REGEX HTML TAG
    string HTML{ "<div>" };
    regex HTMLRegex(R"(<[^>]+>)");
    if (regex_match(HTML, HTMLRegex))
        cout << "Correct tag" << endl;
    else
        cout << "Incorrect tag" << endl;

    return 0;
}