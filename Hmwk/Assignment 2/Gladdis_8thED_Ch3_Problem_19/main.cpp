/* 
 * File:   main.cpp
 * Author: Dimitrios Gizas
 * Created on March 7, 2016, 9:39 AM
 * Purpose: Lab - Monthly Payments 
 */ 

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    float loanA, monIR, numPay, payment, loanC; 
    
    //loanA = Loan Amount
    //monIR = Monthly Interest Rate 
    //numPay = Number of payments 
    //payment = monthly payment 
    //loanC = Loan Check
   
    // pow(base,exp)
    
    loanA = 10000;
    
    monIR = .01;
    
    numPay = 36;
   
    payment = monIR * pow(1 + monIR, numPay) / 
            ( pow(1 + monIR, numPay) - 1 ) * loanA;
  
    
    loanC = payment * ( pow(1 + monIR, numPay)-1) / (monIR * 
            pow(1 + monIR, numPay));
   
      
    cout << "Monthly payments is $" << fixed << setprecision(2) <<
            payment << endl;  
    
    cout << "Loan Check: $" << fixed << setprecision(2) << loanC << endl;
    
    
    return 0;
}

