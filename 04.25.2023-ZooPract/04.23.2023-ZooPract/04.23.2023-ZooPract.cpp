#include <iostream>
#include "Zoo.h"
using namespace std;
int main()
{
	Zoo* zoo = new Zoo{};
	while (true)
	{
		int choise{};
		cout
			<< "Enter your choise" << endl
			<< "1.Add new animal" << endl
			<< "2.Delete animal" << endl
			<< "3.Rename animal" << endl
			<< "4.Show all animals" << endl
			<< "To exit enter any other number" << endl;
		cin >> choise;
		switch (choise)
		{
		case 1:
			system("cls");
			zoo->addAnimal();
			break;
		case 2:
			system("cls");
			cout << "Enter animal number: ";
			cin >> choise;
			zoo->deleteAnimal(choise);
			break;
		case 3:
			system("cls");
			cout << "Enter animal number: ";
			cin >> choise;
			zoo->renameAnimals(choise);
			break;
		case 4:
			system("cls");
			zoo->showAnimals();
			break;
		default:
			return true;
		}
	}
	return 0;
}