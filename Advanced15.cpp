//
//  main.cpp
//  Advanced15
//
//  Created by Sergio Villarreal on 2/28/20.
//  Copyright © 2020 Sergio Villarreal. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    //declaring variables
    double amountOwed = 0.0;
    double amountPaid = 0.0;
    double change = 0.0;
    const int DOLLAR_AMOUNT = 1;
    const double QUARTER_AMOUNT = 0.25;
    const double DIME_AMOUNT = 0.10;
    const double NICKEL_AMOUNT = 0.05;
    const double PENNY_AMOUNT = 0.01;
    int dollar = 0;
    int quarter = 0;
    int nickel = 0;
    int dime = 0;
    int penny = 0;
    
    //inputting variables
    cout << "Enter the amount owed: ";
    cin >> amountOwed;
    cout << "Enter amount paid: ";
    cin >> amountPaid;
    

    
    //finding change
    change = amountPaid - amountOwed;
    cout << "Change is : " << change << endl;
    //setting change amounts
    if (change>1) {
        dollar = change / DOLLAR_AMOUNT;
        change = change - dollar;
        cout << "Dollars: " << dollar << endl;
        quarter = change / QUARTER_AMOUNT;
        change = change - quarter * QUARTER_AMOUNT;
        cout << "Quarters: " << quarter << endl;
        dime = change / DIME_AMOUNT;
        change = change - dime * DIME_AMOUNT;
        cout << "Dimes: " << dime << endl;
        nickel = change / NICKEL_AMOUNT;
        change = change - nickel * NICKEL_AMOUNT;
        cout << "Nickels: " << nickel << endl;
        
        cout << "Current change: " << change << endl;
        cout << "Current penny amount " << PENNY_AMOUNT << endl;
        
        penny = change / PENNY_AMOUNT;     // alt code is          penny = change * 100;
        cout << penny << endl;
        cout << "Pennies: " << penny << endl;
        
    }
        else
            cout << "IDK";
    //end if
    
    return 0;
}
