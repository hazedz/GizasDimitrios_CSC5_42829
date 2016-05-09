/* 
 * File:   main.cpp
 * Author: Dimitrios Gizas
 *Created on March 30th, 2016 8:37am
 * Purpose: Retirement Savings Plan by way of a for-loop
 */
//system Libraries
#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries
  
//Global Constants 
  
//Function Prototypes 
void calcRet (float [], int [],float ,float , float ); //Calculate retirement
void dispret (float [], int [], float); //display retirement
//Execution Begins Here!
  
       
int main(int argc, char** argv) {

    //declare variables 
    float salary = 6e4f;  //$60,000
    float percDep = 1e-1f;//10% to save each year
    float pv = 0.0f;      //present value
    float iRate = 0.05f;  //interest rate from municipal bond investments 
    const int SIZE = 1000;// SIZE of the array
    float fv[SIZE] = {};
          fv[0] = pv;  
    int yrs[SIZE] = {};
        yrs[0] = 0;
    float yrlyDep;        //Yearly Deposit in $'s 
    float savRet;         // Savings to retire in $'s
    
    //Calculate the approximate savings required to retire
    savRet = salary / iRate;
    yrlyDep = salary * percDep;
    
    //Output the initial conditions and setup the table 
    cout << "Savings Required to retire = $" << savRet << endl;
    cout << "Yearly Deposit/Municipal Bond Purchase = $" << yrlyDep << endl;
    cout << "Interest rate = " << iRate * 100 << "%" << endl;

  
    //Computation of the Savings 
    calcRet (fv, yrs, savRet, iRate, yrlyDep);

    
    //display the savings 
    dispret (fv, yrs, savRet);
   
    return 0;
}


void calcRet (float fv[], int yrs[], float savRet,float iRate, float yrlyDep){

     for ( int nYears =1; fv[nYears - 1] < savRet; nYears++){
         yrs[nYears] = nYears;
        fv[nYears]=fv[nYears-1] * (1 + iRate); //Yearly interest rate and calculation
        fv[nYears]=fv[nYears] + yrlyDep;//Yearly interest rate and calculation
    }
    
    
    
}







void dispret (float fv[], int yrs[], float savRet){
    int nYears = 0;
    cout << "Years Future Value" << endl;
    cout << fixed << setprecision(2) << showpoint;
    cout << setw(3) << yrs[0] << setw(5) << " $" << fv << endl;
     for (nYears =1; fv[nYears - 1] < savRet; nYears++){
        cout << setw(3) << yrs[nYears] << setw(5) <<  " $" <<setw(11) 
                << fv[nYears] << endl;

     }

}
