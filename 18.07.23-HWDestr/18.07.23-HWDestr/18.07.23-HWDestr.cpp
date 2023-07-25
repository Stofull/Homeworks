#include <iostream>
#include <string>
#include <regex>
#include <fstream>
#include <cstring>
using namespace std;
class Transport
{
protected:
    char* model;
    virtual void print(ostream& out) const = 0;
    //virtual void IfEqual(const Transport& other) const = 0;

public:
    Transport(const char* modelN) {
        model = new char[strlen(model + 1)];
        strcpy_s(model, modelN);
    }
    virtual ~Transport()
    {
        delete[] model;
    }
    friend ostream& operator<<(ostream& out, const Transport& t) {
        t.print(out);
        return out;
    }
    //virtual bool operator==(const Transport& other) const {
    //    return this->IfEqual(other);
    //}
};
class Car : public Transport
{
public:
    Car(const char* model) : Transport(model) {};
    ~Car() override {};
    friend ostream& operator<<(ostream& out,const Car& car) {
        out << "Car model: " << car.model << endl;
        return out;
    }

protected:
    void print(ostream& out) const override {
        out << *this;
    }
};
class Plane : public Transport
{
public:
    Plane(const char* model) : Transport(model) {};
    ~Plane() override {};
    friend ostream& operator<<(ostream& out, const Plane& plane) {
        out << "Plane model: " << plane.model << endl;
        return out;
    }
protected:
    void print(ostream& out)const override {
        out << *this;
    }
};
class Boat : public Transport
{
public:
    Boat(const char* model) : Transport(model) {};
    ~Boat() override{};
    friend ostream& operator<<(ostream& out, const Boat& boat) {
        out << "Plane model: " << boat.model << endl;
        return out;
    }
protected:
    void print(ostream& out)const override {
        out << *this;
    }
};
int main()
{
    try {
        Transport* car = new Car("Nissan GT-R");
        Transport* plane = new Plane("Boeing");
        Transport* boat = new Boat("Greenline 40");

        cout << *car << endl;
        cout << *plane << endl;
        cout << *boat << endl;
    }
    catch (const exception& e) {
        ofstream file("exceptions.csv", ios_base::app);
        if (file.is_open()){
            file << "Exception: " << e.what() << endl;
            file.close();
        }
        cout << "Exception: " << e.what() << endl;
    }
    return 0;
}
