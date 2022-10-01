// Vectors.cpp : Defines the entry point for the application.
//

#include "Vectors.h"
#include "windows.h"
#include "string"
#include <iomanip>
#include <vector>

using namespace std;

int main()
{
	// Vector of doubles 
	vector<double>v; 

	v.push_back(3.796); // 'push_back' adds new element at end of vector after last element 
	v.push_back(7.569);
	v.push_back(0.054);
	v.push_back(12.33);
	v.push_back(3987);

	cout << "\n ";
	cout << fixed << setprecision(5); // set number precision for number of decimal places

	for (unsigned int i = 0; i < v.size(); i++) // must declare unsigned int because 'size' is used  to iterate length of v 
	{
		cout << v.at(i) << "\n ";  // 'at' is the element at v(i)
	}

	cin.get();

	return 0;
}
