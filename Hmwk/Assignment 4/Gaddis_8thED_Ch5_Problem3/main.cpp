/* 
 * File:   main.cpp
 * Author: Dimitrios Gizas
 * Created on April 4, 2016, 1:27 PM
 * Purpose: Ocean Levels
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    //Declare Statements
    int num, maxY;
    float total, mm;
    
    //input
    mm = 1.5;
    maxY = 25;
            
    //output
    cout << "This will show the ocean rising each year for the next 25 years" << endl;
    cout << "Years           Millimeters" << endl;
    cout << "___________________________" << endl;
    
    for (num = 1;num <= maxY; num++){
        total = num * mm;
        
        cout << num << "\t\t" << total << endl; 
    
    
    }
    
    
    
    
    
    return 0;
}

