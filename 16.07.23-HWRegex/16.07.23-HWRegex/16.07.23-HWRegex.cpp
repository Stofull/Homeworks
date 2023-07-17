#include <iostream> 
#include <regex> 
using namespace std;
class Email
{
private:
	string name;
	string surname;
	string email;
	string phone;
	string password;
public:
	Email(string& name, string& surname, string& email, string phone,string password)
	{
		this->name = name;
		this->surname = surname;
		this->password = password;

		regex emailRegex("([a-zA-Z0-9]+)(\\.|_)?([a-zA-Z0-9]+)@([\\.a-zA-Z]{2,})$");
		regex phoneRegex("^[+]994[0-9]{9}");

		if (!regex_match(email, emailRegex)) {
			throw invalid_argument("Invalid email");
		}
		if (!regex_match(phone, phoneRegex)) {
			throw invalid_argument("Invalid phone number");
		}
		this->email = email;
		this->phone = phone;
		FILE* file{};
		fopen_s(&file, "text.txt", "w");
		if (file == nullptr) {
			cout << "Error" << endl;
			return;
		}
		fprintf(file, "Name: %s\n", this->name.c_str());
		fprintf(file, "Surname: %s\n", this->surname.c_str());
		fprintf(file, "Email: %s\n", this->email.c_str());
		fprintf(file, "Phone: %s\n", this->phone.c_str());
		fprintf(file, "Password: %s\n", this->password.c_str());
		fclose(file);
	}
	friend ostream& operator<<(ostream& out, const Email& q) {
		out << "Name: " << q.name << endl;
		out << "Surname: " << q.surname << endl;
		out << "Email: " << q.email << endl;
		out << "Phone number: " << q.phone << endl;
		return out;
	}
};
int main()
{
	bool tmp{};
	string name{};
	string surname{};
	string emailNew{};
	string phoneNew{};
	string pass{};
	while (!tmp)
	{
		cout << "Enter your name: ";
		cin >> name;
		system("cls");
		cout << "Enter your surname: ";
		cin >> surname;
		system("cls");
		cout << "Enter your email: ";
		cin >> emailNew;
		system("cls");
		cout << "Example: +994503332211\nEnter your phone number: ";
		cin >> phoneNew;
		system("cls");
		cout << "Enter your password: ";
		cin >> pass;
		system("cls");
		try {
			Email email(name, surname, emailNew, phoneNew,pass);
			cout << email << "Registration completed successfully\n";
			tmp = true;
		}
		catch (const exception& e) {
			cout << "Exception occurred: " << e.what() << endl;
			cout << "Enter your info again" << endl;
		}
	}
	system("cls");
	tmp = 0;
	string emailLogin{};
	string passLogin{};
	string phoneLogin{};
	int turn{};
	while(!tmp)
	{
		cout << "1.Log in" << endl
		   	 << "2.Forgot password" << endl;
		cin >> turn;
		switch (turn)
		{
		case 1:
			cout << "Log in" << endl;
			cout << "Enter your email: ";
			cin >> emailLogin;
			if (emailLogin != emailNew)
			{
				cout << "Invalid email" << endl;
				continue;
			}
			cout << "Enter your password: ";
			cin >> passLogin;
			if (passLogin != pass)
			{
				cout << "Invalid password" << endl;
				continue;
			}
			if (emailLogin == emailNew && passLogin == pass) tmp = true;
			break;
		case 2:
			system("cls");
			cout << "Example: +994503332211\n";
			cout << "Enter the phone number associated with this mail: ";
			cin >> phoneLogin;
			if (phoneLogin != phoneNew)
			{
				cout << "Invalid phone number" << endl;
				continue;
			}
			else 
			{
				system("cls");
				cout << "Password: " << pass << endl;
			}
			break;
		default:
			cout << "Inalid number" << endl;
			break;
		}
	}
	system("cls");
	cout << "You are logged in";
	return 0;
}