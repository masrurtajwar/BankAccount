#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout".
#include "Account.h"
#include "Account.cpp"

int main()
{
    cout << fixed << setprecision(2);

    BankAccount Account1;

    cout << "Enter customer/account name: ";
    getline(cin, Account1.name);

    cout << endl << "Enter account balance: ";
    cin >> Account1.balance;

    cout << "Enter amount to deposit: ";
    cin >> Account1.deposit;

    cout << endl << "Balance summary: \n" << Account1.name << " - $" << bankDeposit(Account1.balance, Account1.deposit) << " (+$" << Account1.deposit << ")\n\n\n";

    cin.ignore();

    BankAccount Account2;

    cout << "Enter customer/account name: ";
    getline(std::cin, Account2.name);

    cout << std::endl << "Enter account balance: ";
    cin >> Account2.balance;

    cout << "Enter amount to withdrawl: ";
    cin >> Account2.withdrawl;

    cout << std::endl << "Balance summary: \n" << Account2.name << " - $" << bankWithdrawl(Account2.balance, Account2.withdrawl) << " (-$" << Account2.withdrawl << ")\n\n\n";
}


