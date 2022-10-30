#pragma once 

#include "Import.h"
#include "Stats.h"

#include <windows.h>
#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::fixed; 
using std::setprecision; 

int main()
{
    V2DD data;     // declare 2D vector for data values 
    Import ctai;   // create instance of Import class 

    // Call GetData() member function from Import Class 
    data = ctai.GetData("cta_index.dat");

    Stats stats;   // create instance of Stats class 
    DBL vai;       // declare a double named vai for the VAI value
    DBL mean;      // declare a double named mean for the mean value 
    DBL std;       // declare a double named std for the standard deviation value

    // Call VAI() method function from the stats class 
    vai = stats.VAI(data);

    // Call Mean and Standard Deviation member functions of the Stats class 
    mean = stats.Mean(data, 12);                         // to get annualised figures set the f parameter to 12 
    std = stats.StdDev(data, 's', 12);                   // to get a sample population deviation set the char parameter to 's'

    // Output the results 
    cout << "\n Mean: \n";
    cout << mean << "\n ";
    cout << "\n Standard Deviation: \n";
    cout << std << "\n ";

    cin.get();
    return 0;
}