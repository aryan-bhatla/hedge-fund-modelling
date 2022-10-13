// Inheritance.cpp : Defines the entry point for the application.
//

#include "Inheritance.h"

using namespace std;

Mother::Mother()
{
}

void Mother::sayName()
{
	cout << "I am part of the Bhatla family" << "\n ";
}

Mother::~Mother()
{
}

Daughter::Daughter()
{
}

Daughter::~Daughter()
{
}

int main()
{
	Mother mum;
	cout << "\n " << "Mother" << "\n ";
	mum.sayName();

	Daughter none; 
	cout << "\n " << "Daughter" << "\n ";
	none.sayName();

	cin.get();

	return 0;
}
