#include <iostream>
#include<string>
using namespace std;
class Tribe
{
protected:
	string name;
	string gender;
public:
	Tribe(const string& name, const string& gender) : name(name), gender(gender) {};
	virtual	void changeName(const string& newName) = 0;
	virtual void Info() const = 0;
};
class Human :public Tribe
{
public:
	Human(const string& name, const string& gender) : Tribe(name, gender) {};
	void changeName(const string& newName) override { name = newName; }
	void Info()const override {
		cout << "\tHuman\nName:" << name << endl << "Gender: " << gender << endl;
	}
};
class Elf :public Tribe
{
public:
	Elf(const string& name, const string& gender) : Tribe(name, gender) {};
	void changeName(const string& newName)override { name = newName; }
	void Info()const override {
		cout << "\tElf\nName:" << name << endl << "Gender: " << gender << endl;
	}
};
class Orc :public Tribe
{
public:
	Orc(const string& name, const string& gender) :Tribe(name, gender) {};
	void changeName(const string& newName)override { name = newName; };
	void Info()const override {
		cout << "\tOrc\nName:" << name << endl << "Gender: " << gender << endl;
	}
};
class Characteristic
{
protected:
	int strength;
	int physicalAttack;
	int physicalDefense;
	int agility;
public:
	Characteristic(int strength, int physicalAttack, int physicalDefense, int agility)
		:strength(strength), physicalAttack(physicalAttack),
		physicalDefense(physicalDefense), agility(agility) {};
	virtual void attack() const = 0;
	virtual void performance() const
	{
		cout << "Strength - [";
		for (int i = 0; i < strength; i++) cout << "#";
		for (int i = 0; i < 20 - strength; i++) cout << "-";
		cout << "] " << strength << "/20" << endl;
		cout << "Physical attack - [";
		for (int i = 0; i < physicalAttack; i++) cout << "#";
		for (int i = 0; i < 20 - physicalAttack; i++) cout << "-";
		cout << "] " << physicalAttack << "/20" << endl;
		cout << "Physical defense - [";
		for (int i = 0; i < physicalDefense; i++) cout << "#";
		for (int i = 0; i < 20 - physicalDefense; i++) cout << "-";
		cout << "] " << physicalDefense << "/20" << endl;
		cout << "Agility - [";
		for (int i = 0; i < agility; i++) cout << "#";
		for (int i = 0; i < 20 - agility; i++) cout << "-";
		cout << "] " << agility << "/20" << endl;
	}
};
class Archer : public Characteristic
{
public:
	Archer() : Characteristic(8, 10, 8, 15) {}
	void attack() const override
	{
		cout << "Archer\nBow attack" << endl;
	}
};
class Mage : public Characteristic
{
public:
	Mage() :Characteristic(8, 20, 8, 10) {}
	void attack()const override
	{
		cout << "Mage\nSpell Attack" << endl;
	}
};
class Tank : public Characteristic
{
public:
	Tank() : Characteristic(15, 15, 15, 10) {}
	void attack()const override
	{
		cout << "Tank\nFist attacks!" << endl;
	}
};
int main()
{
	int choice{};
	string name{};
	string gender{};
	cout << "Enter your name: ";
	cin >> name;
	cout << "Enter your gender: ";
	cin >> gender;
	int tribe;
	cout << "Choose your tribe:\n1) Human\n2) Elf\n3) Orc" << endl;
	cin >> tribe;
	if (tribe == 1)
	{
		Tribe* human = new Human(name, gender);
		cout << "Choice your Characteristic:\n1)Archer\n2)Mage\n3)Tank" << endl;
		cin >> choice;
		if (choice == 1)
		{
			system("cls");
			Characteristic* archer = new Archer();
			human->Info();
			cout << endl;
			archer->attack();
			archer->performance();
		}
		else if (choice == 2)
		{
			system("cls");
			Characteristic* mage = new Mage();
			human->Info();
			mage->attack();
			mage->performance();
		}
		else if (choice == 3)
		{
			system("cls");
			Characteristic* tank = new Tank();
			human->Info();
			tank->attack();
			tank->performance();
		}
		else cout << "Choice correct number!";

	}
	else if (tribe == 2)
	{
		Tribe* elf = new Elf(name, gender);
		cout << "Choice your Characteristic:\n1)Archer\n2)Mage\n3)Tank" << endl;
		cin >> choice;
		if (choice == 1)
		{
			system("cls");
			Characteristic* archer = new Archer();
			elf->Info();
			archer->attack();
			archer->performance();
		}
		else if (choice == 2)
		{
			system("cls");
			Characteristic* mage = new Mage();
			elf->Info();
			mage->attack();
			mage->performance();
		}
		else if (choice == 3)
		{
			system("cls");
			Characteristic* tank = new Tank();
			elf->Info();
			tank->attack();
			tank->performance();
		}
		else cout << "Choice correct number!";
	}
	else if (tribe == 3)
	{
		Tribe* orc = new Orc(name, gender);
		cout << "Choice your Characteristic:\n1)Archer\n2)Mage\n3)Tank" << endl;
		cin >> choice;
		if (choice == 1)
		{
			system("cls");
			Characteristic* archer = new Archer();
			orc->Info();
			archer->attack();
			archer->performance();
		}
		else if (choice == 2)
		{
			system("cls");
			Characteristic* mage = new Mage();
			orc->Info();
			mage->attack();
			mage->performance();
		}
		else if (choice == 3)
		{
			system("cls");
			Characteristic* tank = new Tank();
			orc->Info();
			tank->attack();
			tank->performance();
		}
		else cout << "Choice correct number!";
	}
	else cout << "Choice correct number!";
	return 0;
}
