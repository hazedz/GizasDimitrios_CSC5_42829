/* 
 * File:   main.cpp
 * Author: Dimitrios Gizas
 * Purpose: Total Purchase
 * Created on March 1, 2016, 12:10 PM
 */




// System Libraries
#include <iostream>

using namespace std;

// User Libraries

// Global Constants 

// Function Prototypes

// Execution 
int main(int argc, char** argv) {

    //Declare variables for purchases, tax, and total
    
    float var1, var2, var3, var4, var5, tax, Stotal, total, Stax;
    
    var1 = 15.95; 
    var2 = 24.95;
    var3 = 6.95;
    var4 = 12.95;
    var5 = 3.95;
    tax = .07;
    
    //Sub-Total 
    
    Stotal = var1 + var2 + var3 + var4 + var5;
    
    //Sales Tax
    
    Stax = Stotal * tax;
    
    //Total of everything
    
    total = Stotal + Stax;
    
    
    
    //Initialize variables 
   
    //Input Values 
    
    //Map the Inputs to the outputs 
    
    //Output the results 
    
    cout << "The prices of the five items are:" << "\n" << "$" << var1 << "\n"
            << "$" << var2 << "\n" << "$" << var3 << "\n" << "$" << var4 
            << "\n" << "$" << var5 << endl;
    
    cout << "The subtotal is: $" << Stotal << endl;
    
    cout << "The sales tax is 7% of the subtotal and it is: $" << 
            Stax - .0025 << endl;
    
    cout << "The total of all the purchase is: $" << total - .0025 << endl;
    
    //end
    return 0;
}

