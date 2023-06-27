#include <iostream>
#include<string>
using namespace std;
class Passport
{
private:
	string surname;
	string name;
	string patronymic;
	string gender;
	string nationality;
	string dateOfBirth;
	string cardNO;
	string PIN;
	string dateOfExpirty;
	string bloodGroup;
public:
	Passport(string surname, string name, string patronymic, string gender, string nationality, string dateOfBirth, string cardNO, string PIN, string dateOfExpirty, string bloodGroup)
		: surname(surname), name(name), patronymic(patronymic), gender(gender), nationality(nationality)
		, dateOfBirth(dateOfBirth), cardNO(cardNO), PIN(PIN), dateOfExpirty(dateOfExpirty), bloodGroup(bloodGroup) {};
	friend ostream& operator<<(ostream& os, const Passport& passport)
	{
		os << "Surname: " << passport.surname << endl
			<< "Name: " << passport.name << endl
			<< "Patronymic: " << passport.patronymic << endl
			<< "Gender: " << passport.gender << endl
			<< "Nationality: " << passport.nationality << endl
			<< "Date Of Birth: " << passport.dateOfBirth << endl
			<< "Card NO: " << passport.cardNO << endl
			<< "PIN: " << passport.PIN << endl
			<< "Date Of Expirty: " << passport.dateOfExpirty << endl
			<< "Blood Group: " << passport.bloodGroup << endl;
		return os;
	}
};
class ForeignPassport : public Passport
{
private:
	string visa;
	string foreignNO;
public:	
	ForeignPassport(string surname, string name, string patronymic, string gender, string nationality, string dateOfBirth, string cardNO, string PIN, string dateOfExpirty, string bloodGroup
		,string visa, string foreignNO) 
		: Passport(surname,name,patronymic,gender,nationality,dateOfBirth,cardNO,PIN,dateOfExpirty,bloodGroup)
		,visa(visa), foreignNO(foreignNO) {};
	friend ostream& operator<<(ostream& os, const ForeignPassport& foreignpassport)
	{
		os  << Passport(foreignpassport)
			<< "Visa: " << foreignpassport.visa << endl
			<< "Foreign NO: " << foreignpassport.foreignNO << endl;
		return os;
	}
};
int main()
{
	ForeignPassport F1("Fitzgerald", "John", "Smith", "Male", "American", "1990-01-01", "1234567890", "ABC123", "2025-01-01", "II+", "Tourist", "1234567890");
	cout << F1;
	return 0;
}