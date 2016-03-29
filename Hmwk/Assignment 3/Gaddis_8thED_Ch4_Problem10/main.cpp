/* 
 * File:   main.cpp
 * Author: Dimitrios Gizas
 * Created on March 28, 2016, 7:14 PM
 * Purpose: Days in a Month
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int month, year;
    
    //Prompt user for input
    cout << "Enter a month and year to find the amount of days in that month" << endl;
    cout << "Enter a month (1-12): ";
    cin >> month;
    cout << "Enter a year: ";
    cin >> year;
    
    
    
    //If statements - Output
    if (month == 2){
        if (year % 4 == 0)
            cout << "29 Days";
        else
        cout << "28 Days";
    }
    else if (month == 1 || month == 3 || month == 5 || month == 7 || 
        month == 8 || month == 10 || month == 12){
        cout << "31 Days" << endl;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11){
        cout << "30 Days" << endl;
    }
    
    return 0;
}

