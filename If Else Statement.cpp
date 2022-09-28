// If Else Statement.cpp : Defines the entry point for the application.
//

#include "If Else Statement.h"
#include "windows.h"
#include "string.h"

using namespace std;

int main()
{
	int x; 

	cout << "\n " << "Enter a number: ";
	cin >> x; 

	// If else statement 
	if (x > 100)
	{
		cout << "\n" << "Number greater than 100" << "\n";
	}
	else
	{
		cout << " " << "Number less than 100" << "\n";
	}
	return 0;
}
