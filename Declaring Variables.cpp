// Declaring Variables.cpp : Defines the entry point for the application.
//

#include "Declaring Variables.h"
#include <Windows.h>
#include <iostream> 
#include <string>

using namespace std;

int main()
{
	SetConsoleTitle("Console Output"); // Set title of console window 

	// declare variables 
	int x, y; 
	int result; 

	// assign values 
	x = 4;
	y = 2; 
	x = x + 1; 

	// do something 
	result = x - y; 

	cout << "\n " << result << "\n "; 

	cin.get(); // Pause console window

	return 0;
}


