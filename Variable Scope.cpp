// Variable Scope.cpp : Defines the entry point for the application.
//

#include "Variable Scope.h"
#include "string"
#include "Windows.h"
#include "iostream"

using namespace std;

// global variable
int globalN = 144;


int main()
{
	// local variables 
	int localN = 72;

	cout << "\n " << "# of data points (LOCAL) = " << localN;
	cout << "\n " << "# of data points (GLOBAL) = " << globalN;

	cin.get(); // Pause console window 

	return 0;
}
