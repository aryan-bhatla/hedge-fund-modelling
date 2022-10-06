// Overloading the Function swap().cpp : Defines the entry point for the application.
//

#include "Overloading the Function swap().h"
#include "windows.h"
#include "string"
#include "math.h"
#include "vector"

using namespace std;

// It is possible to create funcions that have the same type and name but different number of parameters or data types 
// This is known as overloading a function and is used when functions perform similar tasks but have different parameters 

// Function prototypes	
void swap(int &i, int &j);
void swap(double &k, double &m);
void swap(long double &o, long double &p); 

int main()
{
	// Declare variables
	int i = 1;
	int j = 2; 

	double k = 3.84;
	double m = 4.84; 

	long double o = 1.73937837294739448273598638942857289479587439845;
	long double p = 2.74957894754353917249872849573280958304985430938;

	cout << "\n " << "i = " << i << " j = " << j << "\n ";
	swap(i, j);
	cout << "i = " << i << " j = " << j << "\n ";

	cout << "\n " << "k = " << k << " m = " << m << "\n ";
	swap(k, m);
	cout << "k = " << k << " m = " << m << "\n ";

	cout << "\n " << "o = " << o << " p = " << p << "\n ";
	swap(o, p);
	cout << "o = " << p << " o = " << p << "\n ";

	cin.get();

	return 0;
}

// Function definitions
void swap(int &i, int &j)
{
	int t = i; 
	i = j; 
	j = t; 
}

void swap(double &k, double &m)
{
	double u = k; 
	k = m; 
	m = u; 
}

void swap(long double &o, long double &p)
{
	long double v = o;
	o = p;
	p = v;
}