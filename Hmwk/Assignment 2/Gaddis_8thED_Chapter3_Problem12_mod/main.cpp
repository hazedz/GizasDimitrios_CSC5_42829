/* 
 * File:   main.cpp
 * Author: Dimitrios Gizas
 * Created on March 9, 2016, 10:25 AM
 * Purpose: 
 */

//System Libraries 
#include <iostream>





using namespace std;

//user libraries

//global constants
const float F1 = 32;
const float F2 = 212;
const float C1 = 0;
const float C2 = 100;

//function prototype

//Execution
int main(int argc, char** argv) {

    //Declare Variables 
    float m, b, cLin, cIntp, F;
    
    
    m = 5.0F / 9;
    b = -32.0F * m;
            
   
 
    //C = Celsius 
    //F = Fahrenheit 
    
    cout << "Input degrees Fahrenheit" << endl;
    cin >> F;
    
    cLin = m * F + b;
    
    cout << "If it is " << F << "Fahrenheit then it is " << cLin << " Celsius" 
            << endl;
    
     
    
    return 0;
}

