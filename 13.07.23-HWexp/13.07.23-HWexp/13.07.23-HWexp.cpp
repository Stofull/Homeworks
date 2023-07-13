#include <iostream> 
#include <vector> 
using namespace std;
class OutOfRangeException : public exception
{
public:
    const char* what() const throw() override
    {
        return "Stack is full ";
    }
};
class SimpleNumException : public exception
{
public:
    const char* what() const throw() override
    {
        return "Can't add a prime number ";
    }
};
template <typename T>
class MyVector
{
private:
    T* arr{};
    size_t size{};
    size_t capacity{};
public:
    MyVector(size_t size)
    {
        this->capacity = size * 2;
        this->arr = new T[capacity]{};
    }
    MyVector(initializer_list <int> list)
    {
        this->size = list.size();
        this->capacity = list.size() * 2;
        this->arr = new T[capacity]{};
        for (const T* i = list.begin(); i < list.end(); i++)
        {
            this->arr[i - list.begin()] = *i;
        }
    }
    bool isSimple(T value)
    {
        int tmp{};
        for (size_t i = 1; i <= value; i++)
        {
            if (value % i == 0)
            {
                tmp++;
            }
            if (tmp > 2) return true;
        }
        return false;
    }
    void push(T value)
    {
        if (isSimple(value) == true)
        {
            if (this->size == this->capacity && this->capacity == 10)
            {
                throw OutOfRangeException();
            }
            else if (this->size == this->capacity && this->capacity < 10)
            {
                this->capacity *= 2;
                T* newArr = new T[capacity]{};
                for (size_t i = 0; i < this->size; i++)
                {
                    newArr[i] = this->arr[i];
                }
                delete[] this->arr;
                this->arr = newArr;
            }
            else if (this->size < this->capacity)
            {
                this->arr[this->size] = value;
                this->size++;
            }
        }
        else throw SimpleNumException();
    }
    friend ostream& operator<<(ostream& out, const MyVector& q)
    {
        for (size_t i = 0; i < q.size; i++)
        {
            out << q.arr[i] << ' ';
        }
        return out;
    }
};

int main()
{
    MyVector<int> arr{ 1,2,3,4,5 };
    try 
    {

        arr.push(6);
        arr.push(8);
        arr.push(9);
        arr.push(10);
        arr.push(7);
    }
    catch (exception& error)
    {
        cout << "Error: " << error.what() << endl;
    }
    cout << arr;
    return 0;
}
