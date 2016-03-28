/* 
 * File:   main.cpp
 * Author: Dimitrios Gizas
 * Created on March 28, 2016, 10:15 AM
 * Purpose: 
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    
    int num1;
    
    
    cout << "Enter a number between 1 and 10 to convert it into Roman Numeral" 
            << endl;
    cin >> num1;
    
    cout << "The Roman numeral form of the number " << num1 << " is " << endl;
    
    switch (num1) {
    
        case 1 : cout << "I" << endl;
        break;
        case 2 : cout << "II" << endl;
        break;
        case 3 : cout << "III" << endl;
        break;
        case 4 : cout << "IV" << endl;
        break;
        case 5 : cout << "V" << endl;
        break;
        case 6 : cout << "VI" << endl;
        break;
        case 7 : cout << "VII" << endl;
        break;
        case 8 : cout << "VIII" << endl;
        break;
        case 9 : cout << "IX" << endl;
        break;
        case 10 : cout << "X" << endl;
        break;              
    }
    

    
    return 0;
}

