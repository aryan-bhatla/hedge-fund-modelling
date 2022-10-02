// Call by Value.cpp : Defines the entry point for the application.
//

#include "Call by Value.h"
#include "windows.h"
#include "string"
#include "math.h"

using namespace std;

// Call by value implies that copies of any variables within the parameter list are made as they are called 
// Inefficient when dealing with a large number of calls 

// Function prototype 
void swap(int i, int j);

int main()
{
	// Declare variables

	int i = 1; 
	int j = 2; 

	cout << "\n " << "i = " << i << "\n " << "j = " << j << "\n "; 
	swap(i, j);
	cout << "i = " << i << "\n " << "j = " << j << "\n "; 
	
	cin.get();
	
	return 0;
}


// Function definition 
void swap(int i, int j)
{
	int t; 
	t = i;
	i = j;
	j = t;
}