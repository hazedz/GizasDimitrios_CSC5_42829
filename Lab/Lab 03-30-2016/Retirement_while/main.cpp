/* 
 * File:   main.cpp
 * Author: Dimitrios Gizas
 *Created on March 30th, 2016 8:37am
 * Purpose: Retirement Savings Plan by way of a while loop
 */
//system Libraries
#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries
  
//Global Constants 
  
//Function Prototypes 

//Execution Begins Here!
  
       
int main(int argc, char** argv) {

    //declare variables 
    float salary = 6e4f; //$60,000
    float percDep = 1e-1f; //10% to save each year
    float pv = 0.0f; //present value
    float iRate = 0.05f;
    int nYears = 0; //Comparison of calculation to the rule of 72
    float fv = pv; //Future value 
    float yrlyDep; //Yearly Deposit in $'s 
    float savRet; // Savings to retire in $'s
    
    //Calculate the approximate savings required to retire
    savRet = salary / iRate;
    yrlyDep = salary * percDep;
    
    //Output the initial conditions and setup the table 
    cout << "Savings Required to retire = $" << savRet << endl;
    cout << "Yearly Deposit/Municipal Bond Purchase = $" << yrlyDep << endl;
    cout << "Interest rate = " << iRate * 100 << "%" << endl;
    cout << "Years Future Value" << endl;
    cout << fixed << setprecision(2) << showpoint;
    cout << setw(3) << nYears << setw(10) << " $" << fv << endl;
  
    // Loop each year until the future value i 2x the present value

     while ( fv < savRet ){
        fv*= (1 + iRate); //Yearly interest rate and calculation
        fv += yrlyDep; //Yearly interest rate and calculation
        nYears++;
        cout << nYears << " $" << fv << endl;
    }
    
    
    //Output the results
   

    
    
    
    
    
    
    
    
    
    
    
    return 0;
}

