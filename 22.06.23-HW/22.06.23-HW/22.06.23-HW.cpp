#include <iostream> 
#include <cstdint>
using namespace std;
template <typename T>
struct Queue
{
private:
	uint16_t size{};
	uint16_t capacity{};
	T* arr{};
	bool isExpandable{};
public:
	Queue() = default;
	Queue(bool isExpandable, uint16_t capacity)
	{
		this->capacity = capacity;
		this->arr = new T[capacity]{};
		this->isExpandable = isExpandable;
	}
	Queue(initializer_list<T> list)
	{
		this->capacity = list.size();
		this->arr = new T[capacity]{};
	}
	~Queue()
	{
		delete[] arr;
	}
	void push(T value)
	{
		if (this->size < this->capacity)
		{
			this->arr[this->size] = value;
			this->size++;
		}
		else if (this->size == this->capacity && this->isExpandable == true)
		{
			this->capacity *= 2;
			T* newArr = new T[this->capacity]{};
			for (size_t i = 0; i < this->capacity; i++)
			{
				newArr[i] = this->arr[i];
			}
			delete[] this->arr;
			this->arr = newArr;
			this->arr[this->size] = value;
			size++;
		}
		else if (this->size == this->capacity && this->isExpandable == false)
		{
			cout << "Stack is full " << endl;
		}
	}
	void pop()
	{
		if (this->size == 0) cout << "Stack is empty " << endl;
		else
		{
			this->arr[this->size - 1] = {};
			this->size--;
		}
	}
	T peek()
	{
		if (this->size == 0)
		{
			cout << "Stack is empty " << endl;
			return T();
		}
		else
		{
			return this->arr[this->size - 1];
		}
	}
	friend ostream& operator<<(ostream& out, const Queue<T>& queue)
	{
		for (int i = 0; i < queue.size; i++)
		{
			out << queue.arr[i] << " ";
		}
		out << endl;
		return out;
	}
};
//template <typename T>
//struct deQueue
//{
//private:
//	uint16_t size{};
//	uint16_t capacity{};
//	T* arr{};
//	bool isExpandable{};
//public:
//	deQueue(bool isExpandable, uint16_t capacity)
//	{
//		this->capacity = capacity;
//		this->arr = new T[capacity]{};
//		this->isExpandable = isExpandable;
//	}
//	deQueue(initializer_list<T> list)
//	{
//		this->capacity = list.size();
//		this->arr = new T[capacity]{};
//	}
//	~deQueue()
//	{
//		delete[] arr;
//	}
//	void pushBack(T value)
//	{
//		if (this->size < this->capacity)
//		{
//			this->arr[this->size] = value;
//			this->size++;
//		}
//		else if (this->size == this->capacity && this->isExpandable == true)
//		{
//			this->capacity *= 2;
//			T* newArr = new T[this->capacity]{};
//			for (size_t i = 0; i < this->capacity; i++)
//			{
//				newArr[i] = this->arr[i];
//			}
//			delete[] this->arr;
//			this->arr = newArr;
//			this->arr[this->size] = value;
//			size++;
//		}
//		else if (this->size == this->capacity && this->isExpandable == false) cout << "Stack is full " << endl;
//	}
//	void pushFront(T value)
//	{
//		if (this->size < this->capacity)
//		{
//			this->arr[this->size] = value;
//			this->size++;
//		}
//		else if (this->size == this->capacity && this->isExpandable == true)
//		{
//			this->capacity *= 2;
//			T* newArr = new T[this->capacity]{};
//			for (size_t i = 0; i < this->capacity; i++)
//			{
//				newArr[i] = this->arr[i];
//			}
//			delete[] this->arr;
//			this->arr = newArr;
//			this->arr[this->size] = value;
//			size++;
//		}
//		else if (this->size == this->capacity && this->isExpandable == false) cout << "Stack is full " << endl;
//	}
//	void pop()
//	{
//		if (this->size == 0) cout << "Stack is empty " << endl;
//		else
//		{
//			this->arr[this->size - 1] = NULL;
//			this->size--;
//		}
//	}
//	T peek()
//	{
//		if (this->size == 0) cout << "Stack is empty " << endl;
//		else return this->arr[this->size - 1];
//	}
//	friend ostream& operator<<(ostream& out, const Queue<T>& q)
//	{
//		for (int i = 0; i < q.size; i++)
//		{
//			out << q.arr[i] << " ";
//		}
//		out << endl;
//		return out;
//	}
//};
int main()
{
	Queue<int> arr = {1,2,3,4,5};
	arr.pop();
	arr.push(7);
	arr.push(5);
	cout << arr;
	cout << arr.peek() << endl;
	return 0;
}
