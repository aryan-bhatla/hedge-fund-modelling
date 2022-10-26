#pragma once

#include "Utils.h"

class Stats
{
public: 
	Stats() {}                      // constructor 
	virtual ~Stats() {}             // virtual destructor 

	// Member function declarations 
	inline DBL VAI(const V2DD& v);         // value added index

private:
	// Member variables declarations 
	Utils m_utils;                  // instance of Utils class 
};

// Member function definitions 
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

