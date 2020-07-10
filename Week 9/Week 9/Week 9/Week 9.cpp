#include <iostream>
#include <cctype>
using namespace std;

void upper(char*, const int);
void lower(char*, const int);
void reverse(char*, const int);
int main()
{
	// Constant for the size of a line of input
	const int SIZE = 26;
	// Array to hold a string
	char letters1[SIZE];
	// Ask for a string to flip
	cout << "Enter a phrase (25 Characters Max): \n";
	cin.getline(letters1, SIZE);
	cout << "\n";
	reverse(letters1, SIZE);
	lower(letters1, SIZE);
	upper(letters1, SIZE);

	return 0;
}
//Uppper
void upper(char* letters2, int count)
{
	// Convert all lowercase characters to uppercase
	for (int count = 0; count < strlen(letters2); count++)
	{
		// convert it to an uppercase character.
		if (islower(letters2[count]))
		{
			letters2[count] = toupper(letters2[count]);
		}
	}
	// Display the converted line of input.
	cout << letters2 << endl;
	return;
}
//lower
void lower(char* letters3, const int size)
{
	// Convert all lowercase characters to uppercase
	for (int count = 0; count < strlen(letters3); count++)
	{
		// Convert it to an lowercase character.
		if (isupper(letters3[count]))
		{
			letters3[count] = tolower(letters3[count]);
		}
	}
	// Display the converted line of input.
	cout << letters3 << endl;
	return;
}
// reverse
void reverse(char* letters4, const int size)
{
	// Convert all lowercase characters to uppercase
	for (int count = 0; count < strlen(letters4); count++)
	{
		if (isupper(letters4[count]))
			letters4[count] = tolower(letters4[count]);
		else
			if (islower(letters4[count]))
				letters4[count] = toupper(letters4[count]);
	}
	cout << letters4 << endl;
}