#include <iostream>
#include<string>
using namespace std;
class Vehicle
{
public:
	virtual double taxiTime(double distance) const = 0;
	virtual double taxiCost(double distance) const = 0;
	virtual double shipping(double distance) const = 0;
};
class Car : public Vehicle
{
private:
	double AVGSpeed = 70;
	double costPerKm = 1.5;
	double costPerCargo = 1;
public:
	double taxiTime(double distance) const override
	{
		return distance / AVGSpeed;
	}
	double taxiCost(double distance) const override
	{
		return distance / costPerKm;
	}
	double shipping(double distance) const override
	{
		return distance / costPerCargo;
	}
};
class Bicycle : public Vehicle
{
private:
	double AVGSpeed = 20;
	double costPerKm = 0.5;
	double costPerCargo = 0.5;
public:
	double taxiTime(double distance) const override
	{
		return distance / AVGSpeed;
	}
	double taxiCost(double distance) const override
	{
	    return distance / costPerKm;
	}
	double shipping(double distance) const override
	{
		return distance / costPerCargo;
	}
};

class Wagon : public Vehicle
{
private:
	double AVGSpeed = 15;
	double costPerKm = 0.8;
	double costPerCargo = 1;
public:
	double taxiTime(double distance) const override
	{
		return distance / AVGSpeed;
	}
	double taxiCost(double distance) const override
	{
		return distance / costPerKm;
	}
	double shipping(double distance) const override
	{
		return distance / costPerCargo;
	}
};

int main()
{
	Car car;
	Bicycle bicycle;
	Wagon wagon;
	double distance = 60;
	double carTime = car.taxiTime(distance);
	double carCost = car.taxiCost(distance);
	double carShipping = car.shipping(distance);
	cout << "Car info" << endl;
	cout << "Passenger delivery time (in hours): " << carTime << endl
		<< "Passenger delivery cost: " << carCost << endl
		<< "Shipping cost: " << carShipping << endl;


	double bicycleTime = bicycle.taxiTime(distance);
	double bicycleCost = bicycle.taxiCost(distance);
	double bicycleShipping = bicycle.shipping(distance);
	cout << "Bicycle info" << endl;
	cout << "Passenger delivery time (in hours): " << bicycleTime << endl
		<< "Passenger delivery cost: " << bicycleCost << endl
		<< "Shipping cost: " << bicycleShipping << endl;


	double wagonTime = wagon.taxiTime(distance);
	double wagonCost = wagon.taxiCost(distance);
	double wagonShipping = wagon.shipping(distance);
	cout << "Wagon info" << endl;
	cout << "Passenger delivery time (in hours): " << wagonTime << endl
		<< "Passenger delivery cost: " << wagonCost << endl
		<< "Shipping cost: " << wagonShipping << endl;
	return 0;
}