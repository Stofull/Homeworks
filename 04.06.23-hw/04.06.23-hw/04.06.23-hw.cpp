#include <iostream> 
#include <vector> 

using namespace std;

template<typename T>
class MyVector {
private:
    T* arr{};
    size_t size{};
    size_t capacity{};
public:
    MyVector(size_t size) {
        this->capacity = size * 2;
        this->arr = new T[capacity]{};
    }

    MyVector(initializer_list<T> list) {
        this->size = list.size();
        this->capacity = list.size() * 2;
        this->arr = new T[capacity]{};

        for (const T* i = list.begin(); i < list.end(); i++) {
            this->arr[i - list.begin()] = *i;
        }
    }
    size_t getSize() const {
        return this->size;
    }
    friend ostream& operator<<(ostream& out, const MyVector& v) {
        for (size_t i = 0; i < v.size; i++) {
            out << v.arr[i] << ' ';
        }
        return out;
    }


    T& operator[](size_t index) {
        return this->arr[index];
    }

    void append(T value) {
        if (this->size == this->capacity) {
            this->capacity *= 2;

            T* new_arr = new T[this->capacity]{};

            for (size_t i = 0; i < this->size; i++) {
                new_arr[i] = this->arr[i];
            }
            delete[] this->arr;
            this->arr = new_arr;
        }
        this->arr[this->size] = value;
        this->size++;
    }
    void pop()
    {
        this->arr[this->size - 1] = 0;
        this->size--;
    }
    T* begin()
    {
        return this->arr;
    }
    T* end()
    {
        return this->arr + this->size - 1;
    }
    bool empty()
    {
        int tmp = 0;
        for (size_t i = 0; i < this->size; i++)
        {
            if (this->arr[i] == 0) tmp++;

        }
        if (tmp == this->size)
        {
            return true;
        }
        else return false;
    }
    void clear()
    {
        int length = this->size;
        for (size_t i = 0; i < length; i++)
        {
            this->arr[i] = 0;
        }

    }
    void insert(size_t index, T value) {
        if (index > this->size) {
            return;
        }
        if (this->size == this->capacity)
        {
            this->capacity *= 2;
            T* new_arr = new T[this->capacity]{};
            for (size_t i = 0; i < index; i++)
            {
                new_arr[i] = this->arr[i];
            }
            new_arr[index] = value;
            for (size_t i = index + 1; i <= this->size; i++)
            {
                new_arr[i] = this->arr[i - 1];
            }
            delete[]this->arr;
            this->arr = new_arr;
            this->size++;
        }
        else
        {
            for (size_t i = this->size; i > index ; i--)
            {
                this->arr[i] = this->arr[i - 1];
            }
            this->arr[index] = value;
            this->size++;
        }
        }
    ~MyVector() {
        delete[] arr;
    }
};


int main() {

    MyVector<int> v4{ 1, 2, 3, 4, 5 };
    cout << "Array: " << v4 << endl;
    v4.append(9);
    cout << "Add in end array: " << v4 << endl;
    v4.pop();
    cout << "Last delete: " << v4 << endl;
    cout << "Array size: " << v4.getSize() << endl;
    cout << "True or false: " << v4.empty() << endl;
    cout << "First elemenet array: " << *v4.begin() << endl;
    cout << "Last elemenet array: " << *v4.end() << endl;
    int element = v4[2];
    cout<<"Get element at index: " << element << endl;
    v4.insert(2, 10);
    cout << "Insert: "<< v4<<endl;
    v4.clear();
    cout << "Clear array: " << v4 << endl;
    return 0;
}
