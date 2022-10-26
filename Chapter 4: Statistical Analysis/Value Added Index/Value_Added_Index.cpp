// Value_Added_Index.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Import.h"
#include "Stats.h"

#include <windows.h>
#include <iostream>

using std::cout;
using std::cin;

int main()
{
    V2DD data;     // declare 2D vector for data values 
    Import ctai;   // create instance of Import class 

    // Call GetData() member function from Import Class 
    data = ctai.GetData("cta_index.dat");

    Stats stats;   // create instance of Stats class 
    DBL vai;       // declare a double named vai for the VAI value

    // Call VAI() method function from the stats class 
    vai = stats.VAI(data);

    // Output the result 
    cout << "\n ($)VAI: " << vai << "\n ";

    cin.get();
    return 0;
}
