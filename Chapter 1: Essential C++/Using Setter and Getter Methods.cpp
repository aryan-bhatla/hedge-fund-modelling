// Using Setter and Getter Methods.cpp : Defines the entry point for the application.
//

#include "Using Setter and Getter Methods.h"
#include <iostream>
#include <windows.h>
using std::cout;
using std::cin;

// Default constructor
AClass::AClass()
{
	//cout << " Default constructor called ...\n";
}

// Default destructor
AClass::~AClass()
{
	//cout << " Default destructor called ...\n";
}

// Setter function
void AClass::setName(string name)
{
	m_name = name;
}

// Getter function with const modifier
string AClass::getName() const
{
	return m_name;
}


int main ()
{
	// Create an instance of the AClass class (instantiation)
	AClass obj;

	// Call the sayHello() funtion using the dot operator
	obj.setName("Aryan");
	cout << '\n' << obj.getName() << '\n'; // Call getter using dot operator

	return 0;
}

