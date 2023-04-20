#include <iostream> 
using namespace std;
struct Students {
    char* name = new char[20] {};
    char* surname = new char[20] {};
    char* patronymic = new char[20] {};
    bool* rate = new bool [10] {};
    float total{};
    void print() {
        cout
            << "Name: "<< name << endl
            << "Surname:  "<< surname << endl
            << "Patronymic: "<< patronymic << endl
            << "Average score: "<< total << endl;
    }
};