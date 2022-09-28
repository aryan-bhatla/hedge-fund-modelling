// If Else Statement 2.cpp : Defines the entry point for the application.
//

#include "If Else Statement 2.h"
#include "windows.h"
#include "string.h"

using namespace std;

int main()
{
	int a;

	cout << "\n" << "Enter a positive or negative number: ";

	cin >> a;

	// If else statement 
	if (a > 0)
	{
		cout << " " << "The entered number was positive" << "\n";
	}
	else if (a < 0)
	{
		cout << " " << "The entered number was negative" << "\n";
	}
	else
	{
		cout << " " << "The entered number was zero" << "\n";
	}
	return 0;
}
