#include <iostream>
#include <string>
using namespace std;

struct Employees {
	string name;
	int shift;
	double pay;
};

int main()
{
	Employees employee1, employee2;

	employee1.name = "Zach Millsap";
	employee1.shift = 2;
	employee1.pay = 32;

	employee2.name = "Michael Scott";
	employee2.shift = 3;
	employee2.pay = 24;


	cout << employee1.name << endl;
	cout << employee1.shift << endl;
	cout << employee1.pay << endl;

	return(0);


}