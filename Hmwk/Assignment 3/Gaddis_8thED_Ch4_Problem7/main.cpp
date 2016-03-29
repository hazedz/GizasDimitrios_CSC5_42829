/* 
 * File:   main.cpp
 * Author: Dimitrios Gizas
 * Created on March 27, 2016, 5:47 PM
 * Purpose: Time Calculator
 */

#include <iostream>

using namespace std;

/*
 * 
 */

int main(int argc, char** argv) {

    //declare variables
    int sec;
    float convert;  
    
    //user input
    cout << "Enter a number of seconds to convert into minutes, hours, or days. " << endl;
    cin >> sec;
    
    //If statements - Output
    if (sec >= 86400){
        convert = sec / 86400;
        cout << sec << " converted into days: " << convert << " day(s)!"
             << endl;
    }
    else if (sec >= 3600){
        convert = sec / 3600;
        cout << sec << " converted into hours: " << convert << " hour(s)!" 
             << endl;
    }
    else if (sec >= 60){
        convert = sec / 60;
        cout << sec << " converted into minutes: " << convert << " minute(s)!" 
             << endl;       
    }
    
    
    
    
    
    
    
    return 0;
}

