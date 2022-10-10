// Using Setter and Getter Methods.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include <iostream>
#include <string>
using std::string;

class AClass
{
public:
	AClass(); // Default constructor
	void setName(string x); // Setter prototype
	string getName() const; // Getter prototype with const modifier
	virtual ~AClass();// Default destructor

private:
	string m_name; // Member variable
};


// TODO: Reference additional headers your program requires here.
