// Arrays.cpp : Defines the entry point for the application.
//

#include "Arrays.h"
#include "string"
#include "windows.h"
#include <iomanip> 

using namespace std;

int main()
{
	// Declare an array of 10 integers 
	int n[10];

	// Initialise elements of array 
	for (int i = 0; i < 10; i++)
	{
		n[i] = i + 100;
	}

	cout << "\n" << "Element" << setw(20) << "Value" << "\n";

	// Output each array element and value 
	for (int j = 0; j < 10; j++)
	{
		cout << setw(10) << j << setw(20) << n[j] << "\n";
	}

	cout << " ";

	cin.get();

	return 0;
}
