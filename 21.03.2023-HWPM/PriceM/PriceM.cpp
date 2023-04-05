#include <iostream>
using namespace std;
int main()
{
	int length{}, index_min{}, index_max{}, test_price{}, test_ascii{};
	string test_product{};
	cout << "How many products/prices will there be?\n";
	cin >> length;
	float price_all[5]{};
	string all_product[5]{};
	int ascii_number[5]{};
	for (size_t i = 0; i < length; i++)
	{
		cout << "Enter your " << i + 1 << "-th product: ";
		cin >> all_product[i];
		cout << "Enter your " << i + 1 << "-th price: ";
		cin >> price_all[i];
		cout << endl;
	}
	for (size_t i = 0; i < length; i++)
	{
		cout << all_product[i] << " | " << price_all[i] << endl;
	}
	float min_price = price_all[0], max_price = price_all[0];
	for (size_t i = 0; i < length; i++)
	{
		if (min_price > price_all[i])
		{
			min_price = price_all[i];
			index_min = i;
		}
		if (max_price < price_all[i])
		{
			max_price = price_all[i];
			index_max = i;
		}
	}
	cout << endl << "The cheapest product is: " << all_product[index_min] << " | " << min_price << endl;
	cout << "The expensive product is: " << all_product[index_max] << " | " << max_price << endl;
	char test{};
	int res{};
	for (size_t i = 0; i < length; i++)
	{
		test = all_product[i][0];
		res = test;
		ascii_number[i] = res;
		//cout << ascii_number[i] << "|" << endl;
	}
	for (size_t i = 0; i < length - 1; i++)
	{
		for (size_t j = 0; j < length - i - 1; j++)
		{
			if (ascii_number[j] > ascii_number[j + 1])
			{
				test_ascii = ascii_number[j];
				ascii_number[j] = ascii_number[j + 1];
				ascii_number[j + 1] = test_ascii;
				test_product = all_product[j];
				all_product[j] = all_product[j + 1];
				all_product[j + 1] = test_product;
				test_price = price_all[j];
				price_all[j] = price_all[j + 1];
				price_all[j + 1] = test_price;
			}
		}
	}
	for (size_t i = 0; i < length; i++)
	{
		cout << all_product[i] << "| " << price_all[i] << endl;
	}
	return 0;
}
