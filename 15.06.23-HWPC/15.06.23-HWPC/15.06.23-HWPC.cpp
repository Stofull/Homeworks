#include <iostream> 
#include <string> 
#include <cstring> 
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
	int count{};
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
	Processor* getProcesssor()
	{
		return &(this->processor);
	}
	motherBoard* getmotherBoard()
	{
		return &(this->motherboard);
	}
	RAM* getRAM()
	{
		return &(this->ram);
	}
	GPU* getGPU()
	{
		return &(this->gpu);
	}
	Computer() {
		processor.model = "Unknow";
		motherboard.model = "Unknow";
		ram.model = "Unknow";
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
	Computer(const Computer& computer)
	{
		this->processor.model = computer.processor.model;
		this->motherboard.model = computer.motherboard.model;
		this->ram.model = computer.ram.model;
		this->gpu.model = computer.gpu.model;
		this->ram.count = computer.ram.count;
		this->HDD = computer.HDD;
	}
	friend ostream& operator<<(ostream& os, const Computer& computer)
	{
		os << "Processor: " << computer.processor.model << endl
			<< "Motherboard model: " << computer.motherboard.model << endl
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
	cout << comp << endl;
	Computer tmp = comp;
	tmp.getProcesssor()->model[0] = 'S';
	cout << tmp << endl << comp;
	return 0;
}
