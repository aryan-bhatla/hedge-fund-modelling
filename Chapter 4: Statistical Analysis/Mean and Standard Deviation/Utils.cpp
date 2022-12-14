// Utils.cpp
#include "Utils.h"

#include <iostream>
#include <iomanip>

using std::cout;
using std::setw;
using std::cerr;
using std::right;
using std::fixed;
using std::setprecision;

// Member function definitions
// PrintResult()
void Utils::PrintResult(const V1DD& v, const int& p, const V1DS& s, const int& WIDTH)
{
	UINT n = ceil(v.size() / (DBL)WIDTH);

	cout << "\n  ";
	for (UINT i = 0; i < s.size(); i++)
		cout << std::left << setw(p + 4) << s[i];
	cout << "\n";

	cout << fixed << setprecision(p);
	for (UINT i = 0; i < WIDTH; i++)
	{
		for (UINT j = 0; j < n; j++)
		{
			// Access elements using array flattening i.e., we can
			// index between 1D and 2D arrays using offsets 
			// e.g, a 2D array: a[i][j] = 1D array: a[j*WIDTH+i] 
			cout << right << setw(p + 4) << v[j * WIDTH + i];
		}
		std::cout << "\n";
	}
}

// PrintFile()
void Utils::PrintFile(const V2DD& v, const V1DS& s, const int& n)
{
	cout << "\n        ";
	for (UINT i = 0; i < s.size(); i++)
		cout << std::left << setw(6) << s[i];
	cout << "\n";

	for (UINT i = 0; i < n; i++)
	{
		for (UINT j = 0; j < v[0].size(); j++)
		{
			cout << right << setw(6) << v[i][j];
		}
		cout << "\n";
	}
}

// ErrorChk()
void Utils::ErrorChk(const string& s)
{
	cerr << "\n Run-time error...\n";
	cerr << " Message: " << s << "\n\n";
	std::cin.get();
	exit(1);
}

