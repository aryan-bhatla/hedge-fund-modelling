#pragma once

#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;

// typedef definitions
typedef unsigned int UINT;
typedef double DBL;
typedef string STR;
typedef vector<int> V1DI;
typedef vector<float> V1DF;
typedef vector<double> V1DD;
typedef vector<vector<int>> V2DI;
typedef vector<vector<float>> V2DF;
typedef vector<vector<double>> V2DD;

typedef vector<string> V1DS;
typedef vector<vector<string>> V2DS;

class Utils
{
public:
	Utils() {}
	virtual ~Utils() {}

	// Member function declarations
	static void PrintResult(const V1DD& v, const int& p, const V1DS& s, const int& WIDTH); // PrintResult()
	static void PrintFile(const V2DD& v, const V1DS&, const int& n); // PrintFile()
	void ErrorChk(const string& s); // ErrorChk()
protected:
private:
	// Member variable definitions
};




