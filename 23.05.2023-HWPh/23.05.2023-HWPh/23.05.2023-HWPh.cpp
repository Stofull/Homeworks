#include <iostream>
#include <string>
using namespace std;

class Contact {
private:
	string fullName;
	string homePhone;
	string workPhone;
	string mobilePhone;
	string additionalInfo;

public:
	Contact(const string& name, const string& home, const string& work, const string& mobile, const string& additional)
		: fullName(name), homePhone(home), workPhone(work), mobilePhone(mobile), additionalInfo(additional) {}

	string getFullName() const {
		return fullName;
	}

	string getHomePhone() const {
		return homePhone;
	}

	string getWorkPhone() const {
		return workPhone;
	}

	string getMobilePhone() const {
		return mobilePhone;
	}

	string getAdditionalInfo() const {
		return additionalInfo;
	}
};

class PhoneBook {
private:
	Contact* contacts[100];
	int numContacts;

public:
	PhoneBook() : numContacts(0) {
		for (int i = 0; i < 100; ++i) {
			contacts[i] = nullptr;
		}
	}

	~PhoneBook() {
		for (int i = 0; i < numContacts; ++i) {
			delete contacts[i];
		}
	}

	void addContact(const string& name, const string& home, const string& work, const string& mobile, const string& additional) {
		if (numContacts < 100) {
			Contact* newContact = new Contact(name, home, work, mobile, additional);
			contacts[numContacts] = newContact;
			numContacts++;
			cout << "Contact added successfully." << endl;
		}
		else {
			cout << "Phone book is full. Cannot add more contacts." << endl;
		}
	}

	void removeContact(const string& name) {
		for (int i = 0; i < numContacts; ++i) {
			if (contacts[i]->getFullName() == name) {
				delete contacts[i];
				for (int j = i; j < numContacts - 1; ++j) {
					contacts[j] = contacts[j + 1];
				}
				numContacts--;
				cout << "Contact removed successfully." << endl;
				return;
			}
		}
		cout << "Contact not found." << endl;
	}
	void searchContact(const string& name)
	{
		for (size_t i = 0; i < numContacts; i++)
		{
			int j = 0;
			string test = contacts[i]->getFullName();
			while (test[j] == name[j] && name[j] != '\0') j++;
			if (test[j] == '\0' && name[j] == '\0')
			{
				cout << i + 1 << "-th contact\n";
				cout << "Name: " << contacts[i]->getFullName() << endl;
				cout << "Home Phone: " << contacts[i]->getHomePhone() << endl;
				cout << "Work Phone: " << contacts[i]->getWorkPhone() << endl;
				cout << "Mobile Phone: " << contacts[i]->getMobilePhone() << endl;
				cout << "Additional Info: " << contacts[i]->getAdditionalInfo() << endl;
				break;
			}
		}
	}
	void showAllContacts() const {
		if (numContacts == 0) {
			cout << "Phone book is empty." << endl;
			return;
		}
		for (int i = 0; i < numContacts; ++i) 
		{
			Contact* contact = contacts[i];
			cout << i + 1 << "-th contact" << endl;
			cout << "Name: " << contact->getFullName() << endl;
			cout << "Home Phone: " << contact->getHomePhone() << endl;
			cout << "Work Phone: " << contact->getWorkPhone() << endl;
			cout << "Mobile Phone: " << contact->getMobilePhone() << endl;
			cout << "Additional Info: " << contact->getAdditionalInfo() << endl;
		}
	}
	void saveToFile(int tmp) 
	{
		FILE* file{};
		string text = contacts[tmp - 1]->getAdditionalInfo();
		fopen_s(&file, "data.txt", "w");
		if (file == nullptr)
		{
			cout << "Unable to open the file." << endl;
			return;
		}
		fprintf(file, "%s\n", text.c_str());
		if (file != nullptr) 
		{
			fclose(file);
		}
	}
};

int main() 
{
	PhoneBook phoneBook;
	string NSO{}, HP{}, WP{}, MP{}, AI{};
	int choice{};
	while (true)
	{
		cout
			<< "1. Add contact" << endl
			<< "2. Delete contact" << endl
			<< "3. Search contact" << endl
			<< "4. Show all contacts" << endl
			<< "5. Write additional info to txt file" << endl
			<< "\tEnter any other number to exit" << endl;
	cin >> choice;
		switch (choice)
		{
		case 1:
			system("cls");
			cin.ignore();
			cout << "Enter the name: ";
			getline(cin, NSO);
			cout << "Enter the home phone: ";
			getline(cin, HP);
			cout << "Enter the work phone: ";
			getline(cin, WP);
			cout << "Enter the mobile phone: ";
			getline(cin, MP);
			cout << "Enter the additional info: ";
			getline(cin, AI);
			phoneBook.addContact(NSO, HP, WP, MP, AI);
			break;
		case 2:
			system("cls");
			cout << "Enter the name: ";
			cin.ignore();
			getline(cin, NSO);
			phoneBook.removeContact(NSO);
			break;
		case 3:
			system("cls");
			cout << "Enter the name to search: ";
			cin.ignore();
			getline(cin, NSO);
			phoneBook.searchContact(NSO);
			break;
		case 4:
			system("cls");
			phoneBook.showAllContacts();
			break;
		case 5:
			system("cls");
			cout << "Enter the contact number to write to the file" << endl;
			cin >> choice;
			phoneBook.saveToFile(choice);
			break;
		default:
			cout << "Goodbye!" << endl;
			return false;
			break;
		}
	}
	return 0;
}
