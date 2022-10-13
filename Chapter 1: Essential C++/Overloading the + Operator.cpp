// Overloading the + Operator.cpp : Defines the entry point for the application.
//

// Operator overloading allows the manipulation of standard C++ operators to change the way they are implemented 
// Suppose you had two class objects that you wanted to add together, operator overloading allows you to treat the + differently 
//
// There are three objects involved in the operator+ member function: 
// 1) The current object that plays the role of the left operand 
// 2) The argument v that plays the role of the right operand 
// 3) The new obects with a return type the same as that of the member function
// Neither the current object nor the v object are modified by the operation so we can add the const keyword 
//
// If c was wanted to be printed out directly like: 
// cout << "\n " << c << "\n "; 
// This would lead to an error of the type 'no operator "<<" matches these operands' 


#include "Overloading the + Operator.h"

using namespace std;

Vec2D::Vec2D() : m_x(0), m_y(0)
{
}

Vec2D::Vec2D(int x, int y) : m_x(x), m_y(y)
{
}

Vec2D Vec2D::operator+(const Vec2D& v) const
{
	// Uses an anonymous Vec2D object 
	return Vec2D(m_x + v.m_x, m_y + v.m_y);
}

Vec2D::~Vec2D()
{
}

int main()
{
	Vec2D a(3, 3);  // create Vec2D object a
	Vec2D b(4, 2);  // create Vec2D object b 

	// Use overloaded (+) operator 
	Vec2D c = a + b; 

	cout << "\n " << c.m_x;
	cout << "\n " << c.m_y << "\n ";

	cin.get();

	return 0;
}
