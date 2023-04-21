#include <iostream>
#include "Source.h"
using namespace std;
books* list()
{
	books* b1 = new books;
	cout << "Enter book title: ";
	cin.getline(b1->title, 20);
	cout << "Enter book author: ";
	cin.getline(b1->author, 20);
	cout << "Enter book publisher: ";
	cin.getline(b1->publisher, 20);
	cout << "Enter the genre of the book: ";
	cin.getline(b1->genre, 20);

	return b1;
}
int main()
{
	int length{};
	cout << "Enter number of books: ";
	cin >> length;
	cin.ignore();
	books** book = new books * [length];
	for (int i = 0; i < length; i++) {
		book[i] = list();
	}
	for (int i = 0; i < length; i++) {
		cout << i + 1 << "-th book\n\n";
		book[i]->print();
	}
	cout << endl;
	int choise{};
	cout
		<< "1.Search for books by author" << endl
		<< "2.Book search by title" << endl
		<< "3.Sort array by book title" << endl
		<< "4.Sorting the array by author" << endl
		<< "5.Sort array by publisher" << endl;
	cin >> choise;
	switch (choise)
	{
	case 1:
	{
		char* tmp = new char[20] {};
		cout << "Enter your author: ";
		cin >> tmp;
		for (size_t i = 0; i < length; i++)
		{
			int j = 0;
			while (book[i]->author[j] == tmp[j] && tmp[j] != '\0') j++;
			if (book[i]->author[j] == '\0' && tmp[j] == '\0')
			{
				cout << i + 1 << "-th book\n";
				book[i]->print();
			}
		}
		break;
	}
	case 2:
	{
		char* tmp = new char[20] {};
		cout << "Enter your author: ";
		cin >> tmp;
		for (size_t i = 0; i < length; i++)
		{
			int j = 0;
			while (book[i]->title[j] == tmp[j] && tmp[j] != '\0') j++;
			if (book[i]->title[j] == '\0' && tmp[j] == '\0')
			{
				cout << i + 1 << "-th book\n";
				book[i]->print();
			}
		}
		break;
	}
	case 3:
	{
		for (size_t i = 0; i < length - 1; i++)
		{
			for (size_t j = 0; j < length - 1 - i; j++)
			{
				int k = 0;
				if (book[j]->title[k] > book[j + 1]->title[k])
				{
					books* temp = book[j];
					book[j] = book[j + 1];
					book[j + 1] = temp;
				}
			}
		}
		for (int i = 0; i < length; i++) {
			cout << i + 1 << "-th book\n\n";
			book[i]->print();
		}
		break;
	}
	case 4:
	 {
		for (size_t i = 0; i < length - 1; i++)
		{
			for (size_t j = 0; j < length - 1 - i; j++)
			{
				int k = 0;
				if (book[j]->author[k] > book[j + 1]->author[k])
				{
					books* temp = book[j];
					book[j] = book[j + 1];
					book[j + 1] = temp;
				}
			}
		}
		for (int i = 0; i < length; i++) {
			cout << i + 1 << "-th book\n\n";
			book[i]->print();
		}
		break;
	 }
	case 5:
	 {
		for (size_t i = 0; i < length - 1; i++)
		{
			for (size_t j = 0; j < length - 1 - i; j++)
			{
				int k = 0;
				if (book[j]->publisher[k] > book[j + 1]->publisher[k])
				{
					books* temp = book[j];
					book[j] = book[j + 1];
					book[j + 1] = temp;
				}
			}
		}
		for (int i = 0; i < length; i++) {
			cout << i + 1 << "-th book\n\n";
			book[i]->print();
		}
		break;
	 }
	}
	return 0;
}

