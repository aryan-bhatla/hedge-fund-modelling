#pragma once

#include <string>
#include "Utils.h"

using std::string;

class Import
{
public:
	Import() {}
	virtual ~Import() {}

	// Member function declarations
	V2DD GetData(const string& fileName); // GetData()
protected:
private:
	// Member variable declarations
	Utils m_utils; // An instance of the Utils class
};
