// Prefix and Postfix Operators.cpp : Defines the entry point for the application.
//

#include "Prefix and Postfix Operators.h"
#include "Windows.h"
#include "string"

using namespace std;

int main()
{
	// declare variable 
	int y = 3; 


	// postfix
	cout << "\n " << "Postfix y++" << "\n ";
	cout << "x = " << y++ << "\n ";
	cout << "y = " << y << "\n ";

	// reset y
	y = 3;

	// prefix
	cout << "\n " << "Prefix ++y" << "\n ";
	cout << "x = " << ++y << "\n ";
	cout << "y = " << y << "\n\n ";
	
	cin.get(); // pause console window

	return 0;
}
