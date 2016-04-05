/* 
 * File:   main.cpp
 * Author: Dimitrios Gizas
 * Created on April 4, 2016, 1:27 PM
 * Purpose: Pennies for Pay
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    //Declare Variables
    int day, count;
    float money, total;
    
    money = .01;
    
    //user input
    cout << "You get paid on penny a day on day one and it doubles each day" << endl;
    cout << "Please enter the amount of days you worked." << endl;
    cin >> day;
      cout << "Day" << "\t" << "Amount Earned per Day" << endl;
      cout << "------------------------------" << endl;
    for (count = 1; count <= day; count++){
    
        total = money;
        money *= 2;
  

        cout << count << "\t" << total << endl;
   
    }
    
    return 0;
}

