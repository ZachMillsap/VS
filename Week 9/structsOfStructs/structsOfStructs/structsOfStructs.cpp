#include <iostream>
#include <string>
using namespace std;

int main() {

	struct PersonalInformation {
		// include a personID
		int personID;
		// include a Person

		string nameFirst;
		string nameLast;
		string role;
		// include an Address

		int houseNumber;
		string street;
		string apartmentNumber;
		string city;
		string state;
		int zip;
	};
	PersonalInformation employee1, employee2;
	// Delcare and initialize personalinfo1
	employee1.personID = 1;
	employee1.nameFirst = "Zach";
	employee1.nameLast = "Millsap";
	employee1.role = "Student";
	employee1.houseNumber = 123;
	employee1.street = "Mulberry";
	employee1.apartmentNumber = "403";
	employee1.city = "Ames";
	employee1.state = "Iowa";
	employee1.zip = 50010;
	// Delcare and initialize personalinfo2
	employee2.personID = 2;
	employee2.nameFirst = "Savannah";
	employee2.nameLast = "Hembry";
	employee2.role = "Student";
	employee2.houseNumber = 321;
	employee2.street = "Bandersnatch";
	employee2.apartmentNumber = "4304";
	employee2.city = "Ames";
	employee2.state = "Iowa";
	employee2.zip = 50010;


	//Call compareStructs function

	void compareStructs(); 
	{
		if (employee1.nameFirst == employee2.nameFirst) {
			cout << "Duplicate entry, consider removing one" << endl;
		}
		else {
			cout << "Entries are unique" << endl;
		}

		if (employee1.personID != employee2.personID) {
			cout << "Unique adresses" << endl;
		}
		else {
			cout << "Not unique adresses" << endl;
		}
	} //end compareStructs
}