#include <iostream>
#include <string>
#include <list>
using namespace std;
template<typename T>
class MyList {
public:
    struct Node {
        T data{}; // значение
        Node* next{}; // указатель на следующий элемент
        Node* previous{};
        Node(T data) {
            this->data = data;
        }
    };
    MyList() = default;
    MyList(T data) {
        head = new Node(data);
    }
    MyList(initializer_list<T> list) {
        for (T item : list) {
            pushBack(item);
        }
    }
    void pushBack(T data) {
        if (head == nullptr) {
            head = new Node(data);
            return;
        }
        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = new Node(data);
        current->next->previous = current;
    }
    friend ostream& operator<<(ostream& os, const MyList& list) {
        Node* current = list.head;
        while (current != nullptr) {
            os << "\tValue: " << current->data << " ";
            os << "Previous Address: " << current->previous << endl;
            current = current->next;
        }
        return os;
    }
    T operator[](int index) {
        Node* current = head;
        int counter = 0;
        while (current != nullptr) {
            if (counter == index) {
                return current->data;
            }
            current = current->next;
            counter++;
        }
        return T();
    }
private:
    Node* head{};
};
int main() {

    MyList<int> list2{ 1, 2, 3, 4, 5 };
    cout << list2 << endl;

    list2.pushBack(10);
    list2.pushBack(20);
    list2.pushBack(30);
    
    cout << list2 << endl;



    return 0;
}