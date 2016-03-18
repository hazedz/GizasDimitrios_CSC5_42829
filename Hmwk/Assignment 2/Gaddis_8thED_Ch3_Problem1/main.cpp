/* 
 * File:   main.cpp
 * Author: Dimitrios Gizas
 * Created on March 18, 2016, 11:14 AM
 * Purpose: Miles per Gallon
 */


//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;
//User Libraries

//Global Constants

//Prototype Functions

//Execution Starts Here
int main(int argc, char** argv) {

     //Declare variables
    float gall, miles, mileage;
    
    cout << "Enter the number of gallons of gas the car can hold." << endl;
    cin >> gall;
    
    cout << "Enter the number of miles the car can drive when it is on a full tank."
            << endl;
    cin >> miles;
            
    //Calculate the Variables
    mileage = miles / gall;
    
    cout << "The car's MPG is " << fixed << setprecision (2) << mileage << endl;
    
    
    return 0;
}

