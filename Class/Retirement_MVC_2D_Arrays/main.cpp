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
const int COLMAX=2;

//Function Prototypes 
void calcRet (float [][COLMAX],float ,float , float ); //Calculate retirement
void dispRet (float [][COLMAX], float); //display retirement
//Execution Begins Here!
  
       
int main(int argc, char** argv) {

    //declare variables 
    float salary = 6e4f;  //$60,000
    float percDep = 1e-1f;//10% to save each year
    float pv = 0.0f;      //present value
    float iRate = 0.05f;  //interest rate from municipal bond investments 
    const int SIZE = 1000;// SIZE of the array
    float fv[SIZE][COLMAX] = {{},{}};
          fv[0][1] = pv;  
          fv[0][0] = pv;  
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
    calcRet (fv, savRet, iRate, yrlyDep);

    
    //display the savings 
    dispRet (fv, savRet);
   
    return 0;
}


void calcRet(float fv[][COLMAX],float savRet,float iRate,float yrlyDep){
    //Computation of the Savings
    for(int nYears=1;fv[nYears-1][1]<savRet;nYears++){
        fv[nYears][0]=nYears;
        fv[nYears][1]=fv[nYears-1][1]*(1+iRate);//Yearly interest from bonds, use to purchase more bonds
        fv[nYears][1]=fv[nYears][1]+yrlyDep;  //Yearly deposit or bonds to purchase
    }
}

void dispRet(float fv[][COLMAX],float savRet){
    //Display of the Savings
    int nYears=0;
    cout<<"Years  Future Value"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<setw(3)<<static_cast<int>(fv[0][0])
            <<setw(5)<<" $"<<setw(11)<<fv[0][1]<<endl;
    for(nYears=1;fv[nYears-1][1]<savRet;nYears++){
        cout<<setw(3)<<static_cast<int>(fv[nYears][0])
                <<setw(5)<<" $"<<setw(11)<<fv[nYears][1]<<endl;
    }
}