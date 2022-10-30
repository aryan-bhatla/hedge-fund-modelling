#pragma once

#include "Utils.h"

class Stats
{
public: 
	Stats() {}                      // constructor 
	virtual ~Stats() {}             // virtual destructor 

	// Member function declarations 
	DBL VAI(const V2DD& v);                                          // Value Added Index

	DBL Mean(const V2DD& v, const int& f);                           // Mean()

	DBL StdDev(const V2DD& v, const char& c, const int& f);          // StdDev()

private:
	// Member variables declarations 
	Utils m_utils;                  // instance of Utils class 
};
