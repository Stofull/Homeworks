#include <iostream> 

using namespace std;

template<typename T>
class BinaryTree {
public:
    struct Node {
        T data;
        Node* left{};
        Node* right{};

        Node(T data) : data(data), left(nullptr), right(nullptr) {}
    };

    BinaryTree() = default;

    BinaryTree(T data) {
        this->root = new Node(data);
    }

    BinaryTree(initializer_list<T> list) {
        for (const T* li = list.begin(); li < list.end(); ++li) {
            bool res = this->tryAdd(*li);
            if (res) {
                cout << "Added " << *li << endl;
            }
            else {
                cout << "Failed to add " << *li << endl;
            }
        }
    }

    bool tryAdd(T data) {
        if (this->root == nullptr) {
            this->root = new Node(data);
            return true;
        }
        else {
            Node* current = this->root;
            while (true) {
                if (data < current->data) {
                    if (current->left == nullptr) {
                        current->left = new Node(data);
                        return true;
                    }
                    else {
                        current = current->left;
                    }
                }
                else if (data > current->data) {
                    if (current->right == nullptr) {
                        current->right = new Node(data);
                        return true;
                    }
                    else {
                        current = current->right;
                    }
                }
                else {
                    return false;
                }
            }
        }
    }
    void print()
    {
        print(root);
    }
    void lastDelete(T value)
    {
        Node* current = this->root;
        Node* previous = nullptr;
        Node* res = nullptr;

        while (current != nullptr) {
            if (current->data == value) {
                res = current;
                break;
            }
            else if (current->data > value) {
                previous = current;
                current = current->left;
            }
            else if (current->data < value) {
                previous = current;
                current = current->right;
            }
        }
        if (res->left == nullptr && res->right == nullptr) 
        {
            if (previous->left == res) previous->left = nullptr;
            else previous->right = nullptr;
            delete res;
        }
        else if (res->left != nullptr && res->right == nullptr)
        {
            if (previous->left == res) previous->left = res->left;
            else previous->right = res->left;
            delete res;
        }
        else if (res->left == nullptr && res->right != nullptr)
        {
            if (previous->left == res) previous->left = res->right;
            else previous->right = res->right;
            delete res;
        }
        else
        {
            Node* minNum = res->right;
            Node* headNum = res;
            while (minNum->left != nullptr)
            {
                headNum = minNum;
                minNum = minNum->left;
            }
            res->data = minNum->data;
            if (headNum->left == minNum)
                headNum->left = minNum->right;
            else
                headNum->right = minNum->right;

            delete minNum;
        }
    }
    //void editValue(T oldValue, T newValue)
    //{
    //    Node* current = this->root;
    //    Node* previous = nullptr;
    //    Node* res = nullptr;
    //    while (current != nullptr) {
    //        if (current->data == oldValue) {
    //            res = current;
    //            break;
    //        }
    //        else if (current->data > oldValue) {
    //            previous = current;
    //            current = current->left;          // Второй вариант редактирования
    //        }                                     // В этом случае теряется порядок чисел
    //        else if (current->data < oldValue) {
    //            previous = current;
    //            current = current->right;
    //        }
    //    }
    //    if (res != nullptr) {
    //        res->data = newValue;
    //        cout << "Value edited " << endl;
    //    }
    //    else {
    //        cout << "Value not found " << endl;
    //    }
    //}
    void editValue(T oldValue, T newValue)
    {
        lastDelete(oldValue);
        tryAdd(newValue);
    }
private:
    Node* root{};
    void print(Node* node)
    {
        if (node == nullptr)
        {
            return;
        }
        print(node->left);
        cout << node->data << " ";
        print(node->right);
    }
};
int main()
{
    BinaryTree<int> tree{ 19, 3, 10, 20, 22, 13, 9 };
    tree.print();
    tree.tryAdd(24);
    cout << endl;
    tree.lastDelete(10);
    tree.editValue(3, 99);
    tree.print();
    return 0;
}
