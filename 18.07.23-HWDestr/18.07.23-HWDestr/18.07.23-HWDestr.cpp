#include <iostream> 
#include <regex> 
#include <fstream> 
using namespace std;
static const regex carModel("^[A-Za-z0-9 -]+$");
static const regex planeModel("^[A-Za-z0-9 -]+$");
static const regex boatModel("^[A-Za-z0-9 -]+$");
class InvalidModelException : public exception {
public:
    const char* what() const throw() override {
        return "Invalid model";
    }
};
class Transport
{
protected:
    char* model;
    virtual void print(ostream& out) const = 0;
    virtual bool IfEqual(const char* model, const Transport& other) const = 0;

public:

    Transport(const char* modelN) {
        size_t leng = (strlen(modelN) + 1);
        model = new char[leng];
        strcpy_s(model,leng, modelN);
    }

    virtual ~Transport()
    {
        delete[] model;
    }

    friend ostream& operator<<(ostream& out, const Transport& t) {
        t.print(out);
        return out;
    }
};
class Car : public Transport
{
public:
    Car(const char* model) : Transport(model) {
        if (!regex_match(model, carModel))
            throw InvalidModelException();
    };
    ~Car() override {};
    friend ostream& operator<<(ostream& out, const Car& car) {
        out << "Car model: " << car.model << endl;
        return out;
    }
    bool IfEqual(const char* model, const Transport& other) const override {
        return this->model == model;
    }

    bool operator==(const Car& other) const {
        return IfEqual(model, other);
    }
protected:
    void print(ostream& out) const override {
        out << *this;
    }
};
class Plane : public Transport
{
public:
    Plane(const char* model) : Transport(model) {
        if (!regex_match(model, planeModel))
            throw InvalidModelException();
    };
    ~Plane() override {};
    friend ostream& operator<<(ostream& out, const Plane& plane) {
        out << "Plane model: " << plane.model << endl;
        return out;
    }
    bool IfEqual(const char* model, const Transport& other) const override {
        return this->model == model;
    }

    bool operator==(const Plane& other) const {
        return IfEqual(model, other);
    }
protected:
    void print(ostream& out)const override {
        out << *this;
    }
};
class Boat : public Transport
{
public:
    Boat(const char* model) : Transport(model) {
        if (!regex_match(model, boatModel))
            throw InvalidModelException();
    };
    ~Boat() override {};
    friend ostream& operator<<(ostream& out, const Boat& boat) {
        out << "Boat model: " << boat.model << endl;
        return out;
    }
    bool IfEqual(const char* model, const Transport& other) const override {
        return this->model == model;
    }

    bool operator==(const Boat& other) const {
        return IfEqual(model, other);
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
        Transport* boat = new Boat("Greenline %40");

        cout << *car << endl;
        cout << *plane << endl;
        cout << *boat << endl;

    }
    catch (exception& error) {

        cout << "Error: " << error.what() << endl;
        ofstream file("exceptions.csv", ios_base::app);
        if (file.is_open()) {
            file << "Error: " << error.what() << endl;
            file.close();
        }     
        else
        cout << "Can't open csv file: " << endl;
    }
    return 0;
}
