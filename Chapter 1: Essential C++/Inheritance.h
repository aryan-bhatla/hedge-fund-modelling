// Inheritance.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include <iostream>

class Mother
{
public:
	Mother();
	void sayName();

	virtual ~Mother();
};

class Daughter : public Mother
{
public:
	Daughter(); 

	virtual ~Daughter();
};
// TODO: Reference additional headers your program requires here.
