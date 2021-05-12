//
//  Account.h
//  CSC 2111 Lab 03
//
//  Created by Masrur Tajwar on 1/22/21.
//  Copyright © 2021 Wayne State University. All rights reserved.
//

#ifndef Account_h
#define Account_h
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout".

class BankAccount // Set up a class declaration
{
public: // Declare fields for class

    std::string name; // Declare variables
    float balance;
    float withdrawl;
    float deposit;
};

#endif /* Account_h */
