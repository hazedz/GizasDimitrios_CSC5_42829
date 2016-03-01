/* 
 * File:   main.cpp
 * Author: Dimitrios Gizas
 * Chapter 2 #4 Gladdis
 * Created on February 29, 2016, 7:56 AM
 */

// Restaurant Bill 

#include <iostream>




using namespace std;

/*
 * 
 */


// Execution

int main(int argc, char** argv) {

    //Declare Variable

    float meal, tax, tip, taxT, tipT, mealWTX, mealWTP; 
    
    meal = 88.67;
    
    tax = .0675;
    
    tip = .2;        
       
   // taxT = is the Tax Total
   // tipT = is the TIp Total
   // mealWTX = the total of the meal with tax 
   // mealWTP = the total of the meal with tax and adding the tip total 
 
    taxT = meal * tax;
    
    mealWTX = meal + taxT;
    
    tipT = mealWTX * .2;
    
    mealWTP = mealWTX + tipT;
    

    
    //output 
    
    // Display the meal cost 
    cout << "The cost of the meal is: $" << meal << endl;
    
    // Display the the amount of tax 
    cout << "The tax total is: $" << taxT - .00523 << endl;
    
    // Display the tip amount
    cout << "The tip amount is: $" << tipT - .001 << endl;
    
    // Display the total of bill
    
    cout << "The total cost of the bill with both tax and tip is: $" 
            << mealWTP - .006 << endl;
 
        
    
    return 0;
}

