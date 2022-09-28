// Switch Statement.cpp : Defines the entry point for the application.
//

#include "Switch Statement.h"
#include "windows.h"
#include "string.h"

using namespace std;

int main()
{
	int n; 

	cout << "\n" << "Choose 1,2,3 or 4: ";

	cin >> n; 

	// Switch statement 
	switch (n)
	{
	case 1:
		cout << " " << "You chose 1" << "\n";
		break;

	case 2:
		cout << " " << "You chose 2" << "\n";
		break;

	case 3:
		cout << " " << "You chose 3" << "\n";
		break;

	case 4:
		cout << " " << "You chose 4" << "\n";
		break;

	default:
		cout << " " << "You did not choose any one of 1,2,3 or 4" << "\n";
		break;
	}
	return 0;
}
