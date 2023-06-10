#include <iostream>
#include <string>
using namespace std;
#pragma region Task1
//class Circle
//{
//private:
//	double radius;
//	double diameter;
//	double pi = 3.14;
//public:
//	Circle(double r) : radius(r), diameter(2 * r) {}
//	bool operator>(const Circle& other) const
//	{
//		return getLength() > other.getLength();
//	}
//	bool operator ==(const Circle& other) const
//	{
//		return radius == other.radius;
//	}
//	Circle& operator+=(double count)
//	{
//		radius += count;
//		diameter = 2 * radius;
//		return *this;
//	}
//	Circle& operator-=(double count)
//	{
//		radius -= count;
//		diameter = 2 * radius;
//		return *this;
//	}
//	double getLength() const
//	{
//		return pi * diameter;
//	}
//	double getRadius() const
//	{
//		return radius;
//	}
//	double getDiameter() const
//	{
//		return diameter;
//	}
//};
//int main()
//{
//	Circle c1(7);
//	Circle c2(10);
//
//	if (c1 == c2) cout << "Radii are equal" << endl;
//	else cout << "Radii are not equal" << endl;
//
//	if (c1 > c2) cout << "The first circle is larger than the second" << endl;
//	else cout << "The second circle is larger than the first" << endl;
//
//
//	c1 += 2;
//	cout << "New radii of c1 is: " << c1.getRadius() << endl;
//	cout << "New diameter of c1 is: " << c1.getDiameter() << endl;
//
//	return 0;
//}
#pragma endregion
#pragma region Task2
class Airplane
{
private:
	string model{};
	int seats{};
	int passangers{};
public:
	Airplane(string model, int seats, int passangers) 
		: model(model), seats(seats), passangers(passangers) {};
	string getModel() const
	{
		return model;
	}
	int getSeats() const
	{
		return seats;
	}
	int getPassangers() const
	{
		return passangers;
	}
	bool operator==(const Airplane& other) const
	{
		return model == other.model;
	}
	bool operator>(const Airplane& other) const
	{
		return seats > other.seats;
	}
	bool operator<(const Airplane& other) const
	{
		return seats < other.seats;
	}
	Airplane& operator++()
	{
		if (passangers < seats) ++passangers;
		return *this;
	}
	Airplane& operator--()
	{
		if (passangers > 0) --passangers;
		return *this;
	}
};
int main()
{
	Airplane a1("Boeing 777X", 425, 375);
	Airplane a2("CR929", 320, 150);

	if (a1 == a2) cout << "Same models " << endl;
	else cout << "Not the same models" << endl;
	++a1;
	cout << a1.getPassangers() << "\t+1 to passangers" << endl;
	--a1;
	cout << a1.getPassangers() << "\t-1 to passangers" << endl;
	if (a1 > a2) cout << "The first plane has more passenger capacity" << endl;
	else if (a1 < a2) cout << "The second plane has more passenger capacity" << endl;
	else cout << "Seats are the same count" << endl;
	return 0;
}
#pragma endregion