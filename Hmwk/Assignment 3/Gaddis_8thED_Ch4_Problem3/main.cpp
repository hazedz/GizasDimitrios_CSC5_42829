/* 
 * File:   main.cpp
 * Author: Dimitrios Gizas
 * Created on March 27, 2016, 4:32 PM
 * Purpose: Magic Dates
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    //Declare Variables
    int month, day, year;
    
    //Prompt User to input values
    cout << "Please enter a month, a day and a year ( MM DD YY format )to see if it is a magic date." << endl;
    cout << "Month" << endl;
    cin >> month;
    cout << "Day" << endl;
    cin >> day;
    cout << "Year" << endl;
    cin >> year;
    
    // Check and output result
    if (month * day == year){
        cout << "It is a magic date";
    }
    else{
        cout << "Not a magic date";
    }
    
  
    return 0;
}

