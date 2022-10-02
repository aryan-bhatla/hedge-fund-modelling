// Call by Constant Reference.cpp : Defines the entry point for the application.
//

#include "Call by Constant Reference.h"
#include "string"
#include "windows.h"
#include "math.h"

using namespace std;

// Call by constant reference is used to access the the address of a variable but not change the address in any way 
// Has the advantage over standard reference in not modifying the input arguments 

// Build errors will be present in the swap function, since variables that have been declared 'const' cannot be changed 

// Function prototype 
void swap(const int& i, const int& j);

int main()
{
	// Declare variables 
	int i = 1;
	int j = 2; 

	cout << "\n " << "i = " << i << "j = " << j << "\n ";
	swap(i, j); 
	cout << "i = " << i << "j = " << j << "\n ";

	cin.get();

	return 0;
}

// Function definition 
void swap(const int& i, const int& j)
{
	int t; 
	t = i; 
	i = j; 
	j = t; 
}