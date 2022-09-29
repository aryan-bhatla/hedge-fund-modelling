// Do While Loop.cpp : Defines the entry point for the application.
//

#include "Do While Loop.h"
#include "windows.h"
#include "string"

using namespace std;

int main()
{
	int n; 

	// Do While Loop
	do
	{
		cout << "\n " << "Enter number (0 to end loop): ";
		cin >> n; 
		cout << " " << "The number was " << n << "\n ";
	}

	while (n != 0);
		cout << "0 ends the loop" << "\n ";
	
		system("PAUSE"); // pause console window 

	return 0;
}
