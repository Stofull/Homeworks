#include <iostream> 
using namespace std;
struct books
{
	char* title = new char[20] {};
	char* author = new char[20] {};
	char* publisher = new char [20] {};
	char* genre = new char [20] {};

	void print()
	{
		cout
			<< "Title: " << title << endl
			<< "Author: " << author << endl
			<< "Publisher: " << publisher << endl
			<< "Genre: " << genre << endl;
	}
};
