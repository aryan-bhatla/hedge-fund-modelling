// A Simple Function.cpp : Defines the entry point for the application.
//

#include "A Simple Function.h"
#include "math.h"
#include "string"
#include "windows.h"


using namespace std;


// The general structure of a function is written as 
/* 
* type function_name(type param1, type param2, ....type param(n), ...)
	{
	statements;
	return expression;
	}
*/ 

// Function prototype 
double Product(double a, double b);

int main()
{
	// Declare variables 
	double x; 
	double y; 

	cout << "\n " << "Enter x and y: "; 
	cin >> x >> y;

	cout << " " << "Product = " << Product(x, y) << "\n ";

	system("PAUSE");

	return 0;
}

// Function definition 
double Product(double a, double b)
{
	return(a * b); 
}