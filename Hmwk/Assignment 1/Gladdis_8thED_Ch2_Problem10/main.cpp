/* 
 * File:   main.cpp
 * Author: Dimitrios Gizas
 * Purpose: Miles per Gallon
 * Created on March 1, 2016, 1:52 PM
 */

#include <iostream>

using namespace std;

//User Libraries
  
//Global Constants 
  
//Function Prototypes 





//Execution
int main(int argc, char** argv) {

    //Variables
    
    short carG, mileRE, MPG;
    
    carG = 15;
    
    mileRE = 375;
    
    //mileRE = Miles before refueling
    //carG = Gallons a car can hold
    
    //MPG Calculation
            
    MPG = mileRE / carG;
    
    //Output
    
    cout << "A car has a " << carG << " gallon tank." << endl;
    
    cout << "The car can go " << mileRE << " miles before running out of fuel"
            << endl;
    
    cout << "This car MPG is " << MPG << " miles per gallon";
     
    return 0;
}

