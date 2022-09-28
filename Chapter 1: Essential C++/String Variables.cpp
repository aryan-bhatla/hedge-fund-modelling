// String Variables.cpp : Defines the entry point for the application.
//

#include "String Variables.h"
#include <Windows.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	SetConsoleTitle("Console Ouput"); // Set title of console window 

	// declaring two string variables 
	string strFirstName = "Aryan";
	string strLastName = "Bhatla";

	// concatenate the two strings 
	string strFullName = strFirstName + " " + strLastName;

	cout << "\n" << strFullName; 

	cin.get(); // Pause console window

	return 0;
}
