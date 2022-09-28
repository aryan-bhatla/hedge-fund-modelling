// Type Casting.cpp : Defines the entry point for the application.
//

#include "Type Casting.h"
#include "Windows.h"
#include "string"

using namespace std;

int main()
{
	// declare variables 
	int a = 6; 
	int b = 4; 

	cout << "\n " << a / b << "\n"; // Integer division 
	cout << " " << (double)a / b << "\n "; // Type casting to integer division 

	cin.get(); // Pause console window

	return 0;
}
