// Call by Reference.cpp : Defines the entry point for the application.
//

#include "Call by Reference.h"
#include "windows.h"
#include "string"
#include "math.h"

using namespace std;

// Call by reference passes the memory address of the argument variables to the function rather than the variable itself
// The function body can then act directly on the variables and dynamically change them in memory as required 

// Function prototype 
void swap(int &i, int &j);

int main()
{
    // Declare variables 
	int i = 1; 
	int j = 2; 

	cout << "\n " << "i = " << i << " j = " << j << "\n ";
	swap(i, j);
	cout << "i = " << i << " j = " << j << "\n ";

	cin.get();

	return 0;
}

// Function definition 
void swap(int &i, int &j)
{
	int t;
	t = i;
	i = j;
	j = t;
}