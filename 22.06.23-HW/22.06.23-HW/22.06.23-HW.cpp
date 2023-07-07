#include <iostream>

using namespace std;

template<typename T>
class BinaryTree {
public:
    struct Node {
        T data;
        Node* left{};
        Node* right{};

        Node(T data) : data(data),left(nullptr),right(nullptr) {}
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
    T peek()
    {
        if (root != nullptr) return root->data;
        else cout << "Error peek" << endl; return T();
    }
    //void lastDelete(Node* node)
    //{
    //    if (node->left == nullptr && node->right == nullptr)  
    //    {                         // У меня ни в какую не получилось создать удаление для неё
    //        delete node;
    //        root = nullptr;
    //    }
    //}
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
    tree.peek();
    cout << endl;
    tree.print();
    return 0;
}