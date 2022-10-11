// Bank Account and Balances Class.h : Include file for standard system include files,
// or project specific include files.

#pragma once 

#include <string> 
using std::string;

class Bank
{
public:
    // Default constructor 
    Bank();

    // Overloaded constructor 
    Bank(string, int, double);

    // Default destructor 
    ~Bank();

    // Accessor function 
    string getName() const;
    int getAccNum() const;
    double getBalance() const;

    // Mutator functions 
    void setName(string);
    void setAccNum(int);
    void setBalance(double);

    // Member functions 
    void withdraw(double);
    void deposit(double);

    // Printing static variables so prefix with static 
    static void printBankInfo();

private:
    // Member variables 
    string m_name;
    int m_accNum;
    double m_Bal;

    // Static member variables 
    static int m_totalAccounts;
    static double m_bankBalance;
};
