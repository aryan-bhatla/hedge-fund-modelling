// Bank Account and Balances Class.cpp : Defines the entry point for the application.
//

#include "Bank Account and Balances Class.h"
#include <iostream> 
#include <windows.h>

using std::cout;
using std::cin;

// Initialise static member variables 
int Bank::m_totalAccounts = 0;
double Bank::m_bankBalance = 10000;

// Every time a new user is instantiated in the bank the number of accounts is incremented
Bank::Bank()
{
    m_accNum = 0;
    m_Bal = 0.0;
    m_totalAccounts++;
}

// Every time a user deposits money a new balance must be added 
Bank::Bank(string name, int accNum, double Bal)
{
    m_name = name;
    m_accNum = accNum;
    m_Bal = Bal;
    m_totalAccounts++;
    m_bankBalance += Bal;
}

// Once an object is destroyed number of accounts and bank balance must change 
Bank::~Bank()
{
    m_totalAccounts--;
    m_bankBalance -= m_Bal;
}

// Accessor functions 
string Bank::getName() const
{
    return m_name;
}

int Bank::getAccNum() const
{
    return m_accNum;
}

double Bank::getBalance() const
{
    return m_Bal;
}

// Mutator functions 
void Bank::setName(string name)
{
    m_name = name;
}

void Bank::setAccNum(int accNum)
{
    m_accNum = accNum;
}

// The setBalance mutator must be updated then added to the bank balance 
void Bank::setBalance(double Bal)
{
    m_bankBalance -= Bal;
    m_Bal = Bal;
    m_bankBalance += Bal;
}

// Member functions 
void Bank::withdraw(double withdraw)
{
    m_Bal -= withdraw;
    m_bankBalance -= withdraw;
}

void Bank::deposit(double deposit)
{
    m_Bal += deposit;
    m_bankBalance += deposit;
}

void Bank::printBankInfo()
{
    cout << " \n " << "Number of Accounts: " << m_totalAccounts << " \n ";
    cout << "Total Balance: " << m_bankBalance << " \n ";
}

int main()
{
    cout << " \n" << "Aryan created an account and deposited 500";

    Bank Aryan("Aryan", 0001, 500);  // calling overloaded constructor 

    Bank::printBankInfo();  // calling printBankInfo() inside a class without instantiating an object 

    Bank Aadit;  // calling default constructor 

    cout << " \n" << "Aadit created an account and deposited 1000";

    Aadit.setName("Aadit");  // calling mutator function setName()
    Aadit.setAccNum(0002);   // calling mutator function setAccNum()
    Aadit.setBalance(1000);  // calling mutator function setBalance()

    Bank::printBankInfo();

    cout << " \n" << "Samir created an account and deposited 1500";

    Bank Samir("Samir", 0003, 1500);

    Bank::printBankInfo();

    cout << " \n" << "Samir set his balance to 1200";
    Samir.setBalance(1200);

    Bank::printBankInfo();

    cout << "\n" << "Aadit deposited 700";
    Aadit.deposit(700);

    Bank::printBankInfo();

    cout << " \n" << "Aryan's account was terminated due to lack of use";
    Aryan.~Bank();  // calling destructor 

    Bank::printBankInfo();

    cin.get();

    return 0;
}