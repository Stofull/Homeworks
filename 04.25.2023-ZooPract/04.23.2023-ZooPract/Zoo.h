#include <iostream>
using namespace std;
struct Animal
{
	char* name{};
	int age{};
	char* gender{};

	void animalShow()
	{
		cout
			<< "Name: " << name << endl
			<< "Age: " << age << endl
			<< "Gender: " << gender << endl;
	}
};
struct Zoo
{
	uint16_t animalsCount{ 10 };
	uint16_t animalsInZoo{};
	Animal* animals = new Animal[animalsCount]{};

	Animal createAnimal()
	{
		Animal* animal = new Animal{};
		animal->name = new char[20] {};
		animal->gender = new char[10] {};
		cin.ignore();
		cout << "Enter animal name: ";
		cin.getline(animal->name, 20);
		cout << "Enter animsl gender: ";
		cin.getline(animal->gender, 10);
		cout << "Enter animal age: ";
		cin >> animal->age;
		return *animal;
	}
	void addAnimal()
	{
		if (animalsCount > animalsInZoo)
		{
			animals[animalsInZoo] = createAnimal();
			animalsInZoo++;
		}
		else {
			cout << "Zoo is full" << endl;
		}
	}
	void showAnimals()
	{
		cout << "All animals in zoo: " << endl;
		for (size_t i = 0; i < animalsInZoo; i++)
		{
			cout << i + 1 << "-th cell" << endl;
			animals[i].animalShow();
			cout << endl;
		}
	}
	void renameAnimals(int tmp)
	{
		animals[tmp - 1] = createAnimal();
	}
	void deleteAnimal(int tmp)
	{
		delete[] animals[tmp - 1].name;
		delete[] animals[tmp - 1].gender;
		for (size_t i = tmp - 1; i < animalsInZoo - 1; i++)
		{
			animals[i] = animals[i + 1];
		}
		animalsInZoo--;
	}
};