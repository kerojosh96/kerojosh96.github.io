// Fig. 3.9: AccountTest.cpp
// Displaying and updating Account balances.
#include <iostream>
#include "Account.h"
 
using namespace std;
 
int main()
{
    Account account1{"Jane Green", 50};
    Account account2{"John Blue", -7};
    account1.displayAccount(account1);
    account2.displayAccount(account2);
 
    cout << "\n\nEnter deposit amount for account1: "; // prompt
    int depositAmount;
    cin >> depositAmount; // obtain user input
    cout << "adding " << depositAmount << " to account1 balance" <<endl;
    account1.deposit(depositAmount); // add to account1's balance
 
    account1.displayAccount(account1);
    account2.displayAccount(account2);
    // display balances
 
    cout << "\n\nEnter deposit amount for account2: "; // prompt
    cin >> depositAmount; // obtain user input
    cout << "adding " << depositAmount << " to account2 balance"<<endl;
    account2.deposit(depositAmount); // add to account2 balance
    account1.displayAccount(account1);
    account2.displayAccount(account2);
    // display balances
}
