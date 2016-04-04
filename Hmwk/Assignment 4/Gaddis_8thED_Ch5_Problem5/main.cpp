/* 
 * File:   main.cpp
 * Author: Dimitrios Gizas
 * Created on April 4, 2016, 1:27 PM
 * Purpose: Membership Fees Increase
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    //Declare Variables
    float rate, yearChrg;
    int year;
    
    rate = 0.04;
    yearChrg = 2500;
    
    for (year=1; year <= 6; year++){
    
        yearChrg = yearChrg * ( 1+rate );
        cout << "In " << year << " years the yearly fee will become: $" 
                << fixed << setprecision (2)
                << yearChrg << endl;
     
    }
    
    return 0;
}

