//
//  Account.cpp
//  CSC 2111 Lab 03
//
//  Created by Masrur Tajwar on 1/22/21.
//  Copyright © 2021 Wayne State University. All rights reserved.
//

#include <stdio.h>
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout".
#include "Account.h"

void BankAccount::BankAccount()  // Constructor
{
    cout << "Welcome to Chase Bank!" << endl;
    cout << "----------------------" << endl << endl;
};
BankAccount::~BankAccount() // Destructor
{
    cout << "Thank you for choosing Chase Bank!" << endl;
    cout << "----------------------------------" << endl;
};

// Create member functions in class for deposit and withdrawl
float bankDeposit(float balance, float deposit)  // Deposit member function

{
    balance = balance + deposit;
    return balance;
};

float bankWithdrawl(float balance, float withdrawl) // Withdrawl member function
{
    balance = balance - withdrawl;
    return balance;
};
