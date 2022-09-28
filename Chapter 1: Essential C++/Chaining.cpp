// Chaining.cpp : Defines the entry point for the application.
//

#include "Chaining.h"
#include "windows.h"
#include "string.h"

using namespace std;

int main()
{
	// Declare variables 
	int a; 
	int b; 

	// Get values from keyboard 
	cout << "\n " << "Enter values from keyboard: "; 

	// Assign values to a and b using chaining 
	cin >> a >> b; 

	cout << " " << "The two values were " << a << " and " << b << "\n"; 
	
	system("PAUSE");

	return 0;
}
