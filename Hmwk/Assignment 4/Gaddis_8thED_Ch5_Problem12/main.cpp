/* 
 * File:   main.cpp
 * Author: Dimitrios Gizas
 * Created on April 4, 2016, 7:22 PM
 * Purpose: Celsius to Fahrenheit Table
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    //Declare Variables
    float degreeF, degreeC;
    degreeC = 1;
    
        cout << "Conversion From Celsius To Fahrenheit" << endl;
    cout << "Celsius" << "\t\t" << "Fahrenheit" << endl;
    
    do{
        degreeF = (1.8) * (degreeC) + 32;       
        cout << setw(4) << degreeC << setprecision(3) << "\t\t" << degreeF << endl; 
    }while( degreeC++, degreeC <= 20);
    
    
    
    return 0;
}

