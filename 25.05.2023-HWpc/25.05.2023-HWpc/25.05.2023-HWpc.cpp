#include <iostream>
using namespace std;
struct Computer 
{
	bool corps = false;
	bool cpu = false;
	bool motherboard = false;
	bool ram = false;
	bool gpu = false;
	bool storage = false;
	bool psu = false;

	void add_corps()
	{
		if (corps == true) cout << "You have already added corps" << endl;
		else corps = true;
	}

	void add_cpu() 
	{
		if (!corps) {
			cout << "Cannot add CPU without corps\n";
		}
		else if (cpu == true) cout << "You have already added CPU" << endl;
		else cpu = true;
	}

	void add_motherboard()
	{
		if (!cpu) {
			cout << "Cannot add motherboard without CPU\n";
		}
		else if (motherboard == true) cout << "You have already added Motherboard" << endl;
		else {
			motherboard = true;
		}
	}

	void add_ram() {
		if (!motherboard) {
			cout << "Cannot add RAM without motherboard\n";
		}
		else if (ram == true) cout << "You have already added RAM" << endl;
		else {
			ram = true;
		}
	}

	void add_gpu() {
		if (!motherboard) {
			cout << "Cannot add GPU without motherboard\n";
		}
		else if (gpu == true)cout << "You have already added CPU" << endl;
		else {
			gpu = true;
		}
	}

	void add_storage() {
		if (!motherboard) {
			cout << "Cannot add storage without motherboard\n";
		}
		else if (storage == true) cout << "You have already added Storage" << endl;
		else {
			storage = true;
		}
	}

	void add_psu() {
		if (!motherboard || !gpu) {
			cout << "Cannot add PSU without motherboard and GPU\n";
		}
		else if (psu == true) cout << "You have already added PSU" << endl;
		else {
			psu = true;
		}
	}

	void print() {
		cout << "\t\tCorps: " << corps << endl;
		cout << "\t\tCPU: " << cpu << endl;
		cout << "\t\tMotherboard: " << motherboard << endl;
		cout << "\t\tRAM: " << ram << endl;
		cout << "\t\tGPU: " << gpu << endl;
		cout << "\t\tStorage: " << storage << endl;
		cout << "\t\tPSU: " << psu << endl;
	}

};
int main() 
{
	Computer pc;
	int choise = 1;
	while (choise != 0)
	{
		cout
			<< "\nAssemble your personal computer" << endl
			<< "\n1.Add Corps" << endl
			<< "\n2.Add CPU" << endl
			<< "\n3.Add Motherboard" << endl
			<< "\n4.Add RAM" << endl
			<< "\n5.Add GPU" << endl
			<< "\n6.Add Storage" << endl
			<< "\n7.Add PSU" << endl
			<< "\nEnter '0' to close program" << endl;
		cin >> choise;
		switch (choise)
		{
		case 1:
			pc.add_corps();
			pc.print();
			break;
		case 2:
			pc.add_cpu();
			pc.print();
			break;
		case 3:
			pc.add_motherboard();
			pc.print();
			break;
		case 4:
			pc.add_ram();
			pc.print();
			break;
		case 5:
			pc.add_gpu();
			pc.print();
			break;
		case 6:
			pc.add_storage();
			pc.print();
			break;
		case 7:
			pc.add_psu();
			pc.print();
			break;
		}
		if (pc.cpu == true && pc.gpu == true && pc.psu == true)
		{
			cout << "\n\tCongratulations, you have built a computer!\n";
			break;
		}
	}
	return 0;
}

