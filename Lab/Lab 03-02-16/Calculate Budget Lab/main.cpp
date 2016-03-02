/* 
 * File:   main.cpp
 * Author: Dimitrios Gizas
 * Purpose: Calculate NASA's and the Military's Budget 
 * Created on March 2, 2016, 10:02 AM
 */

#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries
  
//Global Constants 
  
//Function Prototypes 

//Execution
int main(int argc, char** argv) {

    
  
    //Input Variables 
    
    float fedB, miliB, nasaB, miliP, nasaP;
    
    //fedB  = Total Federal Budget 
    //miliB = Total Military Budget
    //nasaB = Total NASA Budget 
    //miliP = Percentage of budget that the Military uses 
    //nasaP = Percentage of budget that NASA uses
  
    
    
    fedB  = 3.8e12; 
    
    miliB = 601e9;
    
    nasaB = 19.3e9;
    
    miliP = miliB / fedB * 100;
    
    nasaP = nasaB / fedB * 100;
    
    
    
    
    
    cout << "The Federal Budget has about 3.8 billon dollars in 2051." << endl;
    
    cout << "The Military only uses about " << fixed << 
            setprecision(2) << miliP << "% of it." << endl;
    
    cout << "NASA only uses about " << nasaP << "% of it." <<endl;
    
   
    return 0;
}

