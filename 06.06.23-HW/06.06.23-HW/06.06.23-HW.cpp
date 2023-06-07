#pragma region Overcoat
//#include <iostream> 
//#include<string> 
//using namespace std;
//class Overcoat
//{
//private:
//	uint16_t price{};
//	string type{};
//	string color{};
//	string size{};
//public:
//	Overcoat(uint16_t price, string type, string color, string size)
//	{
//		this->price = price;
//		this->type = type;
//		this->color = color;
//		this->size = size;
//	}
//	void print()
//	{
//		cout << "Price: " << price << endl;
//		cout << "Type: " << type << endl;
//		cout << "Color: " << color << endl;
//		cout << "Size: " << size << endl;
//	}
//
//	bool operator==(const Overcoat& other) const
//	{
//		return this->type == other.type;
//	}
//	bool operator!=(const Overcoat& other) const
//	{
//		return !(this->type == other.type);
//	}
//	bool operator>(const Overcoat& other) const
//	{
//		return this->price > other.price;
//	}
//	bool operator<(const Overcoat& other) const
//	{
//		return this->price < other.price;
//	}
//	Overcoat operator=(const Overcoat& other)
//	{
//		if (this != &other)
//		{
//			price = other.price;
//			type = other.type;
//			color = other.color;
//			size = other.size;
//		}
//		return *this;
//	}
//};
//int main()
//{
//	Overcoat t_shirt(25, "T-shirt", "black", "M");
//	Overcoat pants(10, "Pants", "Gray", "L");
//
//	int turn{};
//	while (true)
//	{
//	t_shirt.print();
//	cout << endl;
//	pants.print();
//	cout << "1.Type comparison" << endl;
//	cout << "2.Assignment operation" << endl;
//	cout << "3.Price comparison" << endl;
//	cout << "\tEnter any other number to exit" << endl;
//	cin >> turn;
//
//	switch (turn)
//	{
//	case 1:
//		system("cls");
//		if (t_shirt == pants) cout << "Same type" << endl;
//		else cout << "Not same type" << endl;
//		break;
//	case 2:
//		system("cls");
//		t_shirt = pants;
//		cout << "Copied" << endl;
//		break;
//	case 3:
//		system("cls");
//		if (t_shirt > pants) cout << "The first is more expensive" << endl;
//		else if (t_shirt < pants) cout << "The second is more expensive" << endl;
//		else cout << "Same price" << endl;
//		break;
//	default:
//		return true;
//	}
//	}
//	return 0;
//}
#pragma endregion
#pragma region Flat
#include<iostream>
#include<string>
using namespace std;
class Float
{
private:
	int area{};
	int price{};
	int rooms{};
public:
	Float() = default;
	Float(int area, int price, int rooms) : 
		area(area), price(price), rooms(rooms) {}
	void print()
	{
		cout << "Price: " << price << endl;
		cout << "Area: " << area << endl;
		cout << "Rooms: " << rooms << endl;
	}
	bool operator==(const Float& other) const
	{
		return this->area == other.area;
	}

	bool operator!=(const Float& other) const
	{
		return !(this->area == other.area);
	}

	bool operator>(const Float& other) const
	{
		return this->price > other.price;
	}
	bool operator<(const Float& other) const
	{
		return this->price < other.price;
	}
	Float operator=(const Float& other)
	{
		if (this != &other)
		{
			area = other.area;
			price = other.price;
			rooms = other.rooms;
		}
		return *this;
	}
	int getArea() const
	{
		return area;
	}
};
int main()
{
	Float r1(150,150000,4);
	Float r2(100, 85000, 2);
	int turn{};
	while (true)
	{
		cout << "\tFirst apartment" << endl;
		r1.print();
		cout << "\tSecond apartment" << endl;
		r2.print();
		cout
			<< "1.Checking for equality of apartment areas" << endl
			<< "2.Assigning one object to another" << endl
			<< "3.Comparison of two apartments by price" << endl
			<< "\tEnter any other number to exit" << endl;

		cin >> turn;

	switch (turn)
	{
	case 1:
		system("cls");
		if (r1 == r2) cout << "The apartments are the same" << endl;
		else cout << "The apartments are not the same" << endl;
		break;
	case 2:
		system("cls");
		r1 = r2;
		cout << "Apart 2 copied to apart 1" << endl;
		break;
	case 3:
		system("cls");
		if (r1 > r2) cout << "The first apartment is more expensive" << endl;
		else if (r1 < r2) cout << "The second apartment is more expensive" << endl;
		else cout << "Same price" << endl;
		break;
	default:
		return true;
	}
	}

	return 0;
}
#pragma endregion