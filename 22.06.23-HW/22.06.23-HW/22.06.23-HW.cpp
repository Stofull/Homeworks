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
		size = capacity;
		uint16_t index = 0;
		for (const T& value : list)
		{
			this->arr[index++] = value;
		}
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
			for (size_t i = 0; i < this->size; i++)
			{
				newArr[i] = this->arr[i];
			}
			newArr[this->size] = value;
			delete[] this->arr;
			this->arr = newArr;
			this->size++;
		}
		else if (this->size == this->capacity && this->isExpandable == false)
		{
			cout << "Queue is full " << endl;
		}
	}
	void pop()
	{
		if (this->size == 0) cout << "Queue is empty " << endl;
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
			cout << "Queue is empty " << endl;
			return T();
		}
		else
		{
			return this->arr[0];
		}
	}
	friend ostream& operator<<(ostream& out, const Queue<T>& Queue)
	{
		for (int i = 0; i < Queue.size; i++)
		{
			out << Queue.arr[i] << " ";
		}
		out << endl;
		return out;
	}
};

template <typename T>
struct DeQueue
{
private:
	uint16_t size{};
	uint16_t capacity{};
	T* arr{};
	bool isExpandable{};
public:
	DeQueue(bool isExpandable, uint16_t capacity)
	{
		this->capacity = capacity;
		this->arr = new T[capacity]{};
		this->isExpandable = isExpandable;
	}
	DeQueue(initializer_list<T> list)
	{
		this->capacity = list.size();
		this->arr = new T[capacity]{};
		size = capacity;
		uint16_t index = 0;
		for (const T& value : list)
		{
			this->arr[index++] = value;
		}
	}
	~DeQueue()
	{
		delete[] arr;
	}
	void pushBack(T value)
	{
		if (this->size < this->capacity) {
			this->arr[this->size] = value;
			this->size++;
		}
		else if (this->size == this->capacity && this->isExpandable == true) {
			this->capacity *= 2;
			T* newArr = new T[this->capacity]{};
			for (size_t i = 0; i < this->size; i++) {
				newArr[i] = this->arr[i];
			}
			newArr[this->size] = value;
			delete[] this->arr;
			this->arr = newArr;
			this->size++;
		}
		else if (this->size == this->capacity && this->isExpandable == false) cout << "DeQueue is full " << endl;
	}
	void pushFront(T value)
	{
		if (this->size < this->capacity)
		{
			for (size_t i = this->size; i > 0; i--) {
				this->arr[i] = this->arr[i - 1];
			}
			this->arr[0] = value;
			this->size++;
		}
		else if (this->size == this->capacity && this->isExpandable == true)
		{
			this->capacity *= 2;
			T* newArr = new T[this->capacity]{};
			newArr[0] = value;
			for (size_t i = 0; i < this->size; i++)
			{
				newArr[i + 1] = this->arr[i];
			}
			delete[] this->arr;
			this->arr = newArr;
			this->size++;
		}
		else if (this->size == this->capacity && this->isExpandable == false) cout << "DeQueue is full " << endl;
	}
	void popBack()
	{
		if (this->size == 0) cout << "DeQueue is empty " << endl;
		else {
			this->size--;
		}
	}
	void popFront()
	{
		if (this->size == 0) cout << "DeQueue is empty " << endl;
		else {
			for (size_t i = 0; i < this->size - 1; i++) {
				this->arr[i] = this->arr[i + 1];
			}
			this->size--;
		}
	}
	T peek()
	{
		if (this->size == 0)
		{
			cout << "DeQueue is empty " << endl;
			return T();
		}
		else
		{
			return this->arr[this->size - 1];
		}
	}
	friend ostream& operator<<(ostream& out, const DeQueue<T>& deQueue)
	{
		for (int i = 0; i < deQueue.size; i++)
		{
			out << deQueue.arr[i] << " ";
		}
		out << endl;
		return out;
	}
};
int main()
{
	Queue<int> arr = { 1,2,3,4,5 };
	arr.pop();
	arr.push(7);
	arr.push(5);
	cout << arr;
	cout << arr.peek() << endl;
	DeQueue<int> deArr = { 1,2,3,4,5 };
	deArr.pushFront(0);
	deArr.popFront();
	deArr.pushFront(0);
	cout << deArr << endl;
	cout << deArr.peek() << endl;
	return 0;
}
