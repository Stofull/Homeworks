#include <iostream>
#include <string>
using namespace std;
struct Processor
{
	string model;
};
struct motherBoard
{
	string model;

};
struct RAM {
	string model;
	int count;
};
struct GPU {
	string model;
};
class Computer
{
private:
	Processor processor;
	motherBoard motherboard;
	GPU gpu;
	RAM ram;
	int HDD;
public:
	Computer() {
		processor.model = "Unknow";
		motherboard.model = "Unknow";
		ram.model= "Unknow";
		gpu.model = "Unknow";
		ram.count = 0;
		HDD = 0;
	}
	Computer(const string& processorModel, const string& motherboardModel, 
		const string& ramModel, const string& gpuModel, int ramCount, int hdd)
	{
		this->HDD = hdd;
		processor.model = processorModel;
		motherboard.model = motherboardModel;
		ram.model = ramModel;
		gpu.model = gpuModel;
		ram.count = ramCount;
	}
	void print()
	{
		cout << "Processor: " << processor.model << endl;
		cout << "Motherboard model: " << motherboard.model << endl;
		cout << "Ram model: " << ram.model << ", Ram storage: " << ram.count << " GB" << endl;
		cout << "Graphics Processing Unit: " << gpu.model << endl;
		cout << "HDD: " << HDD << " GB" << endl;
	}
};
int main()
{
	Computer comp("Intel Core i7", "Z490", "Kingstone", "RTX 4090", 6, 400);
	comp.print();
	return 0;
}
