#include <iostream> 
#include <time.h> 
#include "Option.h" 
using namespace std;
Students* lesson()
{
	Students* s1 = new Students;
	cout << "Enter name: ";
	cin.getline(s1->name, 20);
	cout << "Enter surname: ";
	cin.getline(s1->surname, 20);
	cout << "Enter patronymic: ";
	cin.getline(s1->patronymic, 20);
	for (size_t i = 0; i < 10; i++)
	{
		s1->rate[i] = 0 + rand() % (1 - 0 + 1);
		s1->total += s1->rate[i];
	}
	s1->total /= 10;
	return s1;
}
int main()
{
	srand(time(0));
	int length{};
	cout << "How many students?\n";
	cin >> length;
	cin.ignore();
	Students** peop = new Students * [length];
	for (int i = 0; i < length; i++) {
		peop[i] = lesson();
	}
	for (int i = 0; i < length; i++) {
		peop[i]->print();
	}

	for (size_t i = 0; i < length; i++)
	{
		float tmp{};
		cout << "How many points do you want to add to the " << i + 1 << "- th student? 1-10?\n";
		cin >> tmp;
		peop[i]->total += tmp / 10;
	}
	for (int i = 0; i < length; i++) {
		peop[i]->print();
	}
	int grade{};
	cout << endl << "Which student's grades do you want to display?" << endl;
	cout << "Enter his number: " << endl;
	cin >> grade;
	peop[grade - 1]->print();
	return 0;
}