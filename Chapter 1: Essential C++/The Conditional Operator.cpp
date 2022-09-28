// The Conditional Operator.cpp : Defines the entry point for the application.
//

#include "The Conditional Operator.h"
#include "Windows.h"
#include "string"

using namespace std;

int main()
{
	// declare variables 
	int a;
	int b; 
	int c;

	// assign values to a and b 
	a = 4; 
	b = 6; 

	// use conditional expression 
	c = (a > b) ? a : b;

	cout << "\n" << "Conditional expression gives " << c << "\n ";

	cin.get(); // Pause console window 

	return 0;
}
