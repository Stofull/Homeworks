#pragma region Task1
//#include <iostream> 
//using namespace std;
//class Fraction {
//private:
//    int numerator{};
//    int denominator{};
//public:
//    Fraction(int one, int second) {
//        numerator = one;
//        denominator = second;
//    }
//    Fraction operator+(const Fraction& other) {
//        return Fraction(numerator * other.denominator + other.numerator * denominator, denominator * other.denominator);
//    }
//    Fraction operator-(const Fraction& other) {
//        return Fraction(numerator * other.denominator - other.numerator * denominator, denominator * other.denominator);
//    }
//    Fraction operator*(const Fraction& other) {
//        return Fraction(numerator * other.numerator, other.denominator * denominator);
//    }
//    Fraction operator/(const Fraction& other) {
//        return Fraction(numerator * other.denominator, other.numerator * denominator);
//    }
//    void print()
//    {
//        cout << numerator << "\n-\n" << denominator << "\n\n";
//    }
//};
//
//int main()
//{
//    Fraction fraction1(1, 2);
//    Fraction fraction2(2, 3);
//    Fraction sum = fraction1 + fraction2;
//    cout << "Amount: " << endl;
//    sum.print();
//    Fraction difference = fraction1 - fraction2;
//    cout << "Difference: " << endl;
//    cout << "Multiplication: " << endl;
//    Fraction multiplication = fraction1 * fraction2;
//    multiplication.print();
//    Fraction division = fraction1 / fraction2;
//    cout << "Division: " << endl;
//    division.print();
//    difference.print();
//    return 0;
//}
#pragma endregion
#pragma region Task2
#include <iostream> 
#include<string> 
using namespace std;
class Student
{
private:
	uint16_t rating{};
	uint16_t age{};
	string name{};
	string gender{};
public:
	Student() = default;
	Student(uint16_t rating, uint16_t age, string name, string gender)
		: rating(rating), age(age), name(name), gender(gender) {}

	string printName()const {
		return name;
	}
	void print()
	{
		cout << "Rating: " << rating << endl;
		cout << "Age: " << age << endl;
		cout << "Name: " << name << endl;
		cout << "Gender: " << gender << endl;
	}
	friend ostream& operator<<(ostream& os, const Student& student) {
		os << "Name: " << student.name << ", Age: " << student.age << ", Gender: " << student.gender << ", Rating: " << student.rating;
		return os;
	}
	bool operator==(const Student& other) const
	{
		return this->age == other.age;
	}
	bool operator!=(const Student& other) const
	{
		return !(this->age == other.age);
	}
	bool operator>(const Student& other) const
	{
		return this->age > other.age;
	}
	bool operator<(const Student& other) const
	{
		return this->age < other.age;
	}
};
class Classroom
{
private:
	Student students[10];
	uint16_t count{};
public:
	void addStudent(const Student& student) {
		if (count < 10) {
			students[count] = student;
			count++;
		}
	}
	void printStudents() const {
		for (int i = 0; i < count; i++) {
			cout << students[i] << endl;
		}
	}
	bool operator>(const Classroom& other) const {
		return count > other.count;
	}

	bool operator<(const Classroom& other) const {
		return count < other.count;
	}

	bool operator==(const Classroom& other) const {
		return count == other.count;
	}

	bool operator!=(const Classroom& other) const {
		return !(*this == other);
	}
};
int main()
{

	Student s1(4, 16, "John", "Male");
	Student s2(5, 17, "Alice", "Female");
	Student s3(3, 20, "Bob", "Male");

	Classroom classroom1;
	Classroom classroom2;

	classroom1.addStudent(s1);
	classroom1.addStudent(s2);
	classroom2.addStudent(s1);
	classroom2.addStudent(s2);
	classroom2.addStudent(s3);

	if (classroom1 > classroom2) {
		cout << "There are more students in the first class than in the second" << endl;
	}
	else if (classroom1 < classroom2) {														// Перегрузка в классе Classroom
		cout << "There are more students in the second grade than in the first" << endl;
	}
	else {
		cout << "The number of students in the class is the same" << endl;
	}

	if (s1 > s2) {
		cout << s1.printName() <<  " Older than " << s2.printName() << endl;
	}
	else if (s1 < s2) {																		// Перегрузка в классе Student
		cout << s2.printName() << " Older than " << s1.printName() << endl;
	}
	else {
		cout << s1.printName() << " is the same age as " << s2.printName() << endl;
	}
	cout << "\tFirst class" << endl;
	classroom1.printStudents();		// Все ученики с первого класса
	cout << "\tSecond class" << endl;
	classroom2.printStudents();		//	Все ученики со второго класса

	return 0;
}

#pragma endregion