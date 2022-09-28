// Input and Output.cpp : Defines the entry point for the application.
//

#include "Input and Output.h"
#include "windows.h" 
#include "string.h"

using namespace std;

int main()
{
	
	// Declare variable 
	int n;

	// Get value from keyboard 
	cout << "\n" << "Enter number of data point: ";

	// Assign value to n
	cin >> n; 

	// Output result 
	cout << " " << "You entered " << n << "\n";

	system("PAUSE"); // pause console window 

	return 0;
}
