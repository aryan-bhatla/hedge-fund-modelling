// A Simple Implementation of a Class.cpp : Defines the entry point for the application.
//

#include "A Simple Implementation of a Class.h"
#include <iostream> 
#include <windows.h>


using namespace std;

// Default Constructor 
BasicClass::BasicClass()
{
}

// Default Destructor 
BasicClass::~BasicClass()
{
}

void BasicClass::sayHello()
{
	cout << " Hello\n";
}

void BasicClass::sayBye()
{
	cout << " Bye\n";
}

int main()
{
	// Create an instance of the BasicClass class 
	BasicClass obj;

	// Call the sayHello and sayBye functions using the dot operator 
	obj.sayHello();
	obj.sayBye();

	cin.get();

	return 0;
}
