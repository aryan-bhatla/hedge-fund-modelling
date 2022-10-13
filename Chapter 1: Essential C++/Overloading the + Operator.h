// Overloading the + Operator.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include <iostream>

class Vec2D
{
public: 
	int m_x;
	int m_y; 

	Vec2D(); 
	Vec2D(int, int);

	// Overloaded (+) operator declared constant and by reference 
	Vec2D operator+(const Vec2D&) const;

	virtual ~Vec2D(); 
};

// TODO: Reference additional headers your program requires here.
