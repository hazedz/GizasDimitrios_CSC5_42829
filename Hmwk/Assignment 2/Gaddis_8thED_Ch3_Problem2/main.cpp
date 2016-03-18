
/* 
 * File:   main.cpp
 * Author: Dimitrios Gizas
 * Created on March 18, 2016, 11:31 AM
 * Purpose: Stadium Seating
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

    //Delcare Variables
    unsigned int tikA, tikB, tikC, prceA, prceB, prceC;
    int amt;
    
    prceA = 15;
    prceB = 12;
    prceC = 9;
    
    //input variables
    cout << "How many Class A tickets were sold." << endl;
    cin >> tikA;
    
     cout << "How many Class B tickets were sold." << endl;
    cin >> tikB;
    
     cout << "How many Class C tickets were sold." << endl;
    cin >> tikC;
    
    //calculate variables
    amt = (prceA * tikA) + (prceB * tikB) + (prceC * tikC); 
    
    cout << "The total amount spent on ticket is $" << fixed << setprecision(2) << amt << endl;
    

    return 0;
}

