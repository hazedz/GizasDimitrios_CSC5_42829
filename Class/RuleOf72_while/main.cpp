/* 
 * File:   main.cpp
 * Author: Dimitrios Gizas
 *Created on March 28th, 2016 8:12am
 * Purpose: To Illustrate rule of 72 by way of a while loop
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
    float pv = 100.0f;//present value
    float iRate = 0.08f;
    float nComp; //Number of compounding periods by rule of 72
    int nYears = 0; //Comparison of calculation to the rule of 72
    float fv = pv; //Future value 
    
    //Calculate the approximate number years to double by rule of 72
    nComp = (0.72f / iRate);
    
    //Output the initial conditions and setup the table 
    cout << "Present value = $" << pv << endl;
    cout << "Interest rate = " << iRate * 100 << "%" << endl;
    cout << "Years Future Value" << endl;
    cout << fixed << setprecision(2) << showpoint;
    cout << setw(3) << nYears << setw(10) << " $" << fv << endl;
  
    // Loop each year until the future value i 2x the present value

    while (fv < 2 * pv ){
        fv*= (1 + iRate); //Yearly interest rate and calculation
        nYears++;          // Increment the number of years 
        cout << nYears << " $" << fv << endl;
    }
    
    
    //Output the results
   
    cout << "By the Rule of 72 it will take " << nComp << " years to double" 
            << endl;
    cout << "The Future Value = $" << fv << endl;
    cout << "The number of years to more than double = " << nYears << endl;
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}

