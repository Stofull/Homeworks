#include <iostream>
#include <string>
using namespace std;
struct Processor
{
	string model;
	Processor(const string& model) : model(model) {}
};
struct motherBoard
{
	string model;
	motherBoard(const string& model) : model(model) {}

};
struct RAM {
	string model;
	int count{};
	RAM(const string& model,int count) : model(model), count(count) {}
};
struct GPU {
	string model;
	GPU(const string& model) : model(model) {}
};
class Computer
{
private:
	Processor processor;
	motherBoard* motherboard; // Композиция лишь тут
	GPU gpu;
	RAM ram;
	int HDD;
public:
	Computer(const string& processorModel, const string& motherboardModel,
		const string& ramModel, const string& gpuModel, int ramCount, int hdd)
		: processor(processorModel), ram(ramModel, ramCount), gpu(gpuModel), HDD(hdd) {
		motherboard = new motherBoard(motherboardModel);
	};
	~Computer()
	{
		delete motherboard;
	}
	friend ostream& operator<<(ostream& os, const Computer& computer)
	{
		os << "Processor: " << computer.processor.model << endl
			<< "Motherboard model: " << computer.motherboard->model<< endl
			<< "Ram model: " << computer.ram.model << endl
			<< "Ram storage: " << computer.ram.count << " GB" << endl
			<< "Graphics Processing Unit: " << computer.gpu.model << endl
			<< "HDD: " << computer.HDD << " GB" << endl;
		return os;
	}
};
int main()
{
	Computer comp("Intel Core i7", "Z490", "Kingstone", "RTX 4090", 6, 400);
	cout << comp;
	return 0;
}