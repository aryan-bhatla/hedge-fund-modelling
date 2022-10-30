#include "Stats.h"

#include <iostream>

using std::cout;

// Member function definitions 
// VAI
DBL Stats::VAI(const V2DD& v)
{
	UINT n = v.size();          // declare an unsigned integer 
	DBL vai;                    // define a double for VAI 

	vai = 1000;                 // initialise vai to $1000

	// Calculate VAI using definition 
	for (UINT i = 0; i < n; i++)
	{
		vai *= (1 + v[i][v[0].size() - 1] / 100.0);

		// same as writing 
		// vai = vai * (1 + v[i][v[0].size() - 1] / 100.0);
		// v[0].size() refers to column data in V2DD 
		// substract one because first column is just index number (1,2,3....72) 
	}
	return vai;
}

// Mean () 
DBL Stats::Mean(const V2DD& v, const int& f = 1)
{
	UINT n = v.size();                // declare an unsigned integer 
	DBL mean = 0.0;                   // define a double for mean 

	// Calculate mean using definition
	for (UINT i = 0; i < n; i++)
	{
		mean += v[i][v[0].size() - 1];
	}
	mean /= n;

	mean *= (double)f;                 // cast frequency (f) to double 

	return mean;
}

// StdDev() - Sample(s), Population(p) 
DBL Stats::StdDev(const V2DD& v, const char& c, const int& f = 1)
{
	if ((c != 's') && (c != 'p')) m_utils.ErrorChk("Type must be 's' (sample) or 'p' (population)");

	UINT n = v.size();                  // declare unsigned integer 
	DBL mean = Mean(v);                 // calculate the mean 
	DBL tmp = 0.0;                      // define a temporary variable for standard deviation
	DBL std = 0.0;                      // define a double for standard deviation

	// Calculate standard deviation using definition 
	for (UINT i = 0; i < n; i++)
	{
		tmp += pow((v[i][v[0].size() - 1] - mean), 2);
	}

	if (c == 's')                       // determine if sample or population 
		tmp /= (n - 1);
	else
		tmp /= n;

	std = sqrt(tmp) * sqrt((double)f);

	return std;
}